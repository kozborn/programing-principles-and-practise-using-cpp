#include "../../std_lib_facilities.h"
#include <string>
#include <algorithm>

typedef struct
{
  bool checked;
  int value;
} Number;

int count_bulls(const vector<int> &user_numbers, vector<Number> &numbers)
{
  int count = 0;
  for (int i = 0; i < user_numbers.size(); ++i)
  {
    if (user_numbers.at(i) == numbers.at(i).value)
    {
      ++count;
      numbers.at(i).checked = true;
    }
  }
  return count;
}

int count_cows(const vector<int> user_numbers, vector<Number> &numbers)
{
  int count = 0;

  vector<Number>::iterator iter;
  for (int i = 0; i < user_numbers.size(); ++i)
  {
    for (int j = 0; j < numbers.size(); ++j)
    {
      if (numbers.at(j).value == user_numbers.at(i) && !numbers.at(j).checked)
      {
        count++;
      }
    }
  }
  return count;
}

int main()
{

  vector<Number> numbers = {
      {false, 1},
      {false, 2},
      {false, 3},
      {false, 4}};

  vector<int> user_numbers;
  string user_number;
  int bulls = 0;
  int cows = 0;
  bool guessed = false;
  const int SIZE = 4;

  try
  {
    cout << "Please provide four numbers (q to quit)" << endl;
    cin >> user_number;
    for (int i = 0; i < user_number.length(); ++i)
    {
      user_numbers.push_back(static_cast<int>(user_number[i] - '0'));
    }

    if (user_numbers.size() != 4)
    {
      cout << "Please provide exactly 4 digits not " << user_numbers.size() << endl;
    }
    else
    {
      bulls = count_bulls(user_numbers, numbers);
      cows = count_cows(user_numbers, numbers);
      cout << bulls << " bull and " << cows << " cows" << endl;
      if (bulls == SIZE)
      {
        cout << "Congratulations, You have won!!!" << endl;
      }
    }
  }
  catch (exception &e)
  {
    cerr << "Error: " << e.what() << endl;
    return 1;
  }
  catch (...)
  {
    cerr << "Unknown error" << endl;
    return 2;
  }
  return 0;
}
