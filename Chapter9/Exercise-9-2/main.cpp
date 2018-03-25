#include "../../std_lib_facilities.h"

class NamePairs {
  public:
    void read_names();
    void read_ages();
    void print();
  private:
    vector<string> names;
    vector<int> ages;
};

void NamePairs::read_names() {
  string name;
  while (true)
  {
    cin >> name;
    if(name == "EOF") break;
    names.push_back(name);
  }
}

void NamePairs::read_ages() {
  int age;
  for (int i = 0; i < names.size(); ++i) {
    cin >> age;
    ages.push_back(age);
  }
}

void NamePairs::print() {
  for(int i = 0; i < names.size(); ++i) {
    cout << i+1 << " " << names[i] << endl;
  }
}

int main() {
  cout << "Name Pairs class" << endl;
  NamePairs np;
  np.read_names();
  np.read_ages();
  np.print();
  return 0;
}
