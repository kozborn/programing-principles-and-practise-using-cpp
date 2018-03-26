#include "../std_lib_facilities.h"

int main() {
  try {
    int i = 0;
    cout << "Provide a number between 1 and 10" << endl;

    while(cin >> i) {
      if (1 <=i && i <= 10) {
        cout << "Well done, I'm proud of you" << endl;
      } else {
        cout << "Unfortunately " << i << " doesn't match range 1 to 10 " << endl;
      }
    }
  } catch(...) {
    cerr << "Something went wrong" << endl;
    return 1;
  }
  return 0;
}