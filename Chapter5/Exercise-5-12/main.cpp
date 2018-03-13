#include "../../std_lib_facilities.h"
#include <algorithm>

typedef struct
{
  bool checked;
  int value;
} Number;

vector<int> buildUserNumbers(const int user_number) {
  vector<int> temp (4);
  temp[0] = user_number / 1000 % 10;
  temp[1] = user_number / 100 % 10;
  temp[2] = user_number / 10% 10;
  temp[3] = user_number % 10;
  return temp;
}

int count_bulls(const vector<int> &user_numbers, vector<Number> &numbers)
{
  int count = 0;
  for(int i = 0; i < user_numbers.size(); ++i) {
    if (user_numbers.at(i) == numbers.at(i).value) {
      ++count;
      numbers.at(i).checked = true;
    }
  }
  return count;
}

int count_cows(const vector<int> user_numbers, vector<Number> &numbers) {
  int count = 0;

  vector<Number>::iterator iter;
  for (int i = 0; i < user_numbers.size(); ++i) {
    for (int j = 0; j < numbers.size(); ++j) {
      if(numbers.at(j).value == user_numbers.at(i) && !numbers.at(j).checked) {
        count++;
      }
    }
  }
  return count;
}

int main(){

  vector<Number> numbers = {
    {false, 1},
    {false, 2},
    {false, 3},
    {false, 4}
  };

  vector<int> user_numbers(4);
  int user_number = 0;
  int bulls = 0;
  int cows = 0;
  bool guessed = false;

  try
  {
    cout << "Please provide four numbers (q to quit)" << endl;
    while (cin >> user_number)
    {
      if (user_number < 0 || user_number > 9999)
      {
        cout << "Number should has four digits (0000-9999). Try again.";
      }
      else
      {
        user_numbers = buildUserNumbers(user_number);
        bulls = count_bulls(user_numbers, numbers);
        cows = count_cows(user_numbers, numbers);
        cout << bulls << " bull and " << cows << " cows" << endl;
      }
      cout << "Please provide four numbers (q to quit)" << endl;
    }

    } catch(exception &e){
        cerr << "Error: " << e.what() << endl;
        return 1;
    }catch(...) {
        cerr << "Unknown error" << endl;
        return 2;
    }
    return 0;
}
