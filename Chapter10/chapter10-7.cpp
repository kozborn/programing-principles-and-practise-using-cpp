#include "../std_lib_facilities.h"

void skip_to_int() {
  if (cin.fail())
  {
    cin.clear();
    char ch;
    while (cin >> ch && !isdigit(ch));
    if (!cin) error("Brak danych");
    cin.unget();
  }
}

int get_int() {
  int n = 0;
  while(true) {
    if(cin >> n) return n;
    cout << "That was not a number, please try again" << endl;
    skip_to_int();
  }
}

int get_int(int min, int max) {
  int i = 0;
  while(true) {
    i = get_int();
    if(min <= i && i <= max) return i;
    cout << "Sorry, but " << i << " doesn't belong to [" << min << ", " << max << "]" << endl;
  }
}

int main() {
  try {
    int i = 0;
    cout << "Provide a number between 1 and 10" << endl;

    while(true) {
      i = get_int(1, 10);
    }
  } catch(...) {
    cerr << "Something went wrong" << endl;
    return 1;
  }
  return 0;
}