#include "../std_lib_facilities.h"

int main() {
  cout << "Simple program for testing input output streams" << endl;
  try {
    int i;
    while (cin >> i) cout << i << endl;
    
    if(cin.eof()) return 1;
    if(cin.bad()) error("Ups ");
    if(cin.fail()) {
      cin.clear();
      char c;
      cin >> c;
      if(c != '*') {
        cin.unget();
        cin.clear(ios_base::failbit);
      } else {
        cout << "Found ending character" << endl;
      }
    }
  } catch (...) {
    cerr << "Something went wrong" << endl;
  }

  return 0;
}