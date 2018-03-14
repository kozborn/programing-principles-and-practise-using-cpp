#include "../../std_lib_facilities.h"
#include <string>

int main()
{
  char num;
  vector<int> numbers;
  try
  {
    cout << "Please provide four numbers (q to quit)" << endl;
    while (cin >> num) {
      switch(num) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
          numbers.push_back(static_cast<int>(num - '0'));
      }
      if (num == 'q') {
        cout << "Ending program" << endl;
        break;
      }
    }

    for(int i = 0; i < numbers.size(); ++i) {
      cout << numbers.at(i) << endl;
    }

    cout << "Size: " << numbers.size() << endl;


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

