/* 
  Create vector with 5 names
  next, ask user to provide age for this users
  print pairs
  sort vector with names
  print pairs in new order
*/

#include "../../std_lib_facilities.h"

int main() {
  try {
    vector<string> names;
    vector<string> sorted_names;
    vector<int> ages;
    string name;
    int age;

    while(names.size() < 5) {
      cout << "Enter name:" << endl;
      cin >> name;
      names.push_back(name); 
    }

    for(auto name:names) {
      cout << "Enter age for " << name << " : " << endl;
      cin >> age;
      ages.push_back(age);
    }

    for(int i = 0; i < names.size(); ++i) {
      cout << names.at(i) << " is " << ages.at(i) << " years old" << endl;
    }

    sorted_names = names;
    sort(sorted_names.begin(), sorted_names.end());
    for (int i = 0; i < sorted_names.size(); ++i)
    {
      size_t pos = find(names.begin(), names.end(), sorted_names.at(i)) - names.begin();
      cout << sorted_names.at(i) << " is " << ages.at(pos) << " years old" << endl;
    }
  } catch (exception &e) {
    cerr << e.what() << endl;
  } catch (...) {
    cerr << "Something went wrong" << endl;
  }

  return 0;
}