#include "../../std_lib_facilities.h"

using std::cout;
using std::endl;

void print(const string &outputLabel, const vector<int> &vec) {
  cout << outputLabel << " ";
  for (auto i:vec){
    cout << i << " " ;
  }
  cout << endl;
}

int main() {
  vector<int> t = {23,34,234,12,1,44,5,23,52,5,5};
  string label = " >> ";
  print(label, t);
  return 0;
}