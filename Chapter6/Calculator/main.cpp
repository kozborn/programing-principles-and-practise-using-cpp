#include "../../std_lib_facilities.h"

class Token {
  public: 
  char kind;
  double value;
  Token(char ch) :kind(ch), value(0) {}
  Token(char ch, double val) :kind(ch), value(val) {}
};

int main() {
  try {
    cout << "Calculator" << endl;

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
