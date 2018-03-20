#include "../../std_lib_facilities.h"

using std::cout;
using std::endl;

void Fibonacci(int x, int y, vector<int> &v, int n) { 
  if (n < 2) 
    error("How should I calculate fibonacci with less than 2 values?");
  v.push_back(x);
  v.push_back(y);
  for(int i = 0; i < n - 2; ++i) {
    v.push_back(v.at(i) + v.at(i+1));
  }
}

void print(const string &outputLabel, const vector<int> &vec) {
  cout << outputLabel << " ";
  for (auto i:vec){
    cout << i << " " ;
  }
  cout << endl;
}

int main() {
  vector<int> t;
  int start;
  int stop;
  int count;
  cout << "Enter first second and iteration count " << endl;
  cin >> start >> stop >> count;
  Fibonacci(start, stop, t, count);
  string label = " >> ";
  print(label, t);
  return 0;
}