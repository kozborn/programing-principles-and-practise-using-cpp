#include "../std_lib_facilities.h"

int main() {

  cout << "Formatting data" << endl;
  cout << "Showing 1234 with different bases" << endl;
  cout << dec << 1234 << "\t(dec)" << endl;
  cout << hex << 1234 << "\t(hex)" << endl;
  cout << oct << 1234 << "\t(oct)" << endl;

  cout << "Formatting my birthday" << endl;
  cout << dec << 10 << "\t" << 5 << "\t" << 1986 << "\t(dec)" << endl;
  cout << hex << 10 << "\t" << 5 << "\t" << 1986 << "\t(hex)" << endl;
  cout << oct << 10 << "\t" << 5 << "\t" << 1986 << "\t(oct)" << endl;

  cout << "Showing base" << endl;
  cout << showbase; // turn on showing base before number
  cout << dec << 1234 << "\t(dec)" << endl;
  cout << hex << 1234 << "\t(hex)" << endl;
  cout << oct << 1234 << "\t(oct)" << endl;
  cout << noshowbase;  // turn off showing base before number

  int a;
  int b;
  int c;
  int d;
  cout << dec;
  cin >> dec;
  cout << "Provide 4 numbers" << endl;
  cin >> a >> hex >> b >> oct >> c >> d;
  cout << a << '\t' << b << '\t' << c << '\t' << d << '\t' << endl;

  cout << "Unsetting default values for istream" << endl;
  cin.unsetf(ios::dec); 
  cin.unsetf(ios::oct); 
  cin.unsetf(ios::hex); 

  cout << dec;
  cin >> dec;
  cout << "Provide 4 numbers" << endl;
  cin >> a >> b >> c >> d;
  cout << a << '\t' << b << '\t' << c << '\t' << d << '\t' << endl;
  

  return 0;
}