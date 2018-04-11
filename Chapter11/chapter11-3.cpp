#include "../std_lib_facilities.h"

int main() {
  try {
    cout << "Binary file input/output" << endl;
    cout << "Enter filename for input" << endl;
    string filename;
    cin >> filename;

    ifstream ifs(filename.c_str(), ios_base::binary);
    if(!ifs) error("Cannon open file for input", filename);
    
    cout << "Enter filename for output" << endl;
    cin >> filename;
    ofstream ofs(filename.c_str(), ios_base::binary);
    if(!ofs) error("Cannot open file for output", filename);
    vector<int> v;

    int i;
    while(ifs.read(as_bytes(i), sizeof(int))) {
      v.push_back(i);
    }

    for (int i = 0; i < v.size(); ++i) {
      ofs.write(as_bytes(v[i]), sizeof(int));
    }

    for (int i = 0; i < v.size(); ++i) {
      cout.write(as_bytes(v[i]), sizeof(int));
    }
    cout << endl;
    return 0;
  } catch (...) {
    cerr << "Something went very wrong" << endl;
    return 1; 
  }
}