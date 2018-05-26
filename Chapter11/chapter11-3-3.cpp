#include "../std_lib_facilities.h"

int main() {
  try {
    int num = 0;
    string filename = "numbers";
    cout << "Reading bytes from file" << endl;
    cout << "Enter filename to read from" << endl;
    // cin >> filename;
    cout << "Enter which sign you want to read" << endl;
    cin >> num;
    fstream fs(filename.c_str());
    if(!fs) error("Cannot open file to read/write", filename);

    fs.seekg(num);
    char ch;
    fs >> ch;
    cout << "Sign [" << num << "] in a [" << filename << "] file is " << ch << endl;

    cout << "Enter which sign to change" << endl;
    cin >> num;
    cout << "with what sign" << endl;
    cin >> ch;
    fs.seekp(num);
    fs << ch;
  } catch(...) {
    cerr << "Something went very wrong" << endl;
  }
  return 0;
}