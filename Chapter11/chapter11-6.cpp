#include "../std_lib_facilities.h"

int main() {
  try {
    vector<char> digitVector;
    vector<char> letterVector;
    vector<char> alphaVector;
    char ch;
    while(cin.get(ch)) {
      if(isspace(ch)) {
        cout << "break" << endl;
      }
      else if(isdigit(ch)){
        digitVector.push_back(ch);
      }
      else if(isalpha(ch)) {
        alphaVector.push_back(ch);
      }
      else {
        cout << "Not sure what to do" << endl;
      }
    }
    for(int i = 0; i < digitVector.size(); ++i) {
      cout << digitVector[i] << endl;
    }
    for(int i = 0; i < alphaVector.size(); ++i) {
      cout << alphaVector[i] << endl;
    }
  } catch (...) {
    cerr << "Something went very wrong" << endl;
  }
  return 0;
}