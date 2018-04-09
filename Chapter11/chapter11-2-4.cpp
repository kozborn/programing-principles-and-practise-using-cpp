#include "../std_lib_facilities.h"

int main() {

  cout << general << setprecision(2) << 1234.56789 << "\t\t(general)" << endl;
  cout << fixed << 1234.56789 << "\t\t(fixed)" << endl;
  cout << scientific << 1234.56789 << "\t(scientific)" << endl;
  cout << endl;

  cout << general << setprecision(5) << 1234.56789 << "\t\t(general)" << endl;
  cout << fixed << 1234.56789 << "\t(fixed)" << endl;
  cout << scientific << 1234.56789 << "\t(scientific)" << endl;
  cout << endl;

  cout << general << setprecision(8) << 1234.56789 << "\t(general)" << endl;
  cout << fixed << 1234.56789 << "\t(fixed)" << endl;
  cout << scientific << 1234.56789 << "\t(scientific)" << endl;
  cout << endl;

  return 0;
}