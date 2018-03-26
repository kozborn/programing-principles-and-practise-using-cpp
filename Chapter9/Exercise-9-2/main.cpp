#include "../../std_lib_facilities.h"

class NamePairs {
  public:
    void read_names();
    void read_ages();
    void print();
    void sort();
  private:
    vector<string> names;
    vector<int> ages;
};

void NamePairs::read_names() {
  cout << "Please provide names and end input with ';'" << endl;
  string name;
  while (true)
  {
    cin >> name;
    if (name == ";") break;
    names.push_back(name);
  }
}

void NamePairs::read_ages() {
  cout << "For each name please provide age" << endl;
  int age;
  for (int i = 0; i < names.size(); ++i) {
    cout << names[i] << ": " ;
    cin >> age;
    ages.push_back(age);
  }
}

void NamePairs::sort() {
  if(names.size() != ages.size()) {
    cout << "Size of names vector and ages vector does not match" << endl;
  }
  vector<string> namesUnSorted = names;
  vector<int> agesUnSorted = ages;
  std::sort(names.begin(), names.end());
  for(int i = 0; i < names.size(); ++i) {
    size_t pos = find(namesUnSorted.begin(), namesUnSorted.end(), names.at(i)) - namesUnSorted.begin();
    ages.at(i) = agesUnSorted.at(pos);
  }
}

void NamePairs::print() {
  for(int i = 0; i < names.size(); ++i) {
    cout << i+1 << " " << names[i] << ": " << ages[i] << endl;
  }
}

int main() {
  cout << "Name Pairs class" << endl;
  NamePairs np;
  np.read_names();
  np.read_ages();
  np.print();
  np.sort();
  np.print();
  return 0;
}
