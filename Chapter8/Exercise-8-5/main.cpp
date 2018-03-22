// Reverse order of vector<int>

#include "../../std_lib_facilities.h"
#include <exception> // std::exception

void reverseOrder(vector<int> t, vector<int> &res) {
  while (!t.empty())
  {
    res.push_back(t.back());
    t.pop_back();
  }
}

void print(const string &outputLabel, const vector<int> &vec)
{
  cout << outputLabel << " ";
  for (auto i : vec)
  {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  try {
    vector<int> normal = {1,2,3,4,5,6,7,8,9};
    vector<int> reversed;

    reverseOrder(normal, reversed);

    cout << "We'll try to reverse order of vector ";
    print(">> ", normal);
    print("res >> ", reversed);
    print("normal >> ", normal);
  } catch (std::exception& e) {
    cerr << e.what() << endl;
    return 1;
  }
  return 0;
}