#include "../std_lib_facilities.h"

void skip_to_int() {
  if (cin.fail())
  {
    cin.clear();
    cout << "To nie była liczba" << endl;
    char ch;
    while (cin >> ch && !isdigit(ch));
    if (!cin) error("Brak danych");
    cin.unget();
  }
}

int main() {
  try {
    int i = 0;
    cout << "Provide a number between 1 and 10" << endl;

    while(true) {
      if (cin >> i)
      {
        if (1 > i || i > 10)
        {
          cout << "Sorry but " << i << " doesn't belong to [1,10]" << endl;
        } else {
          cout << "Ok" << endl;
        }
      } else {
        skip_to_int(); 
      }
    }
  } catch(...) {
    cerr << "Something went wrong" << endl;
    return 1;
  }
  return 0;
}