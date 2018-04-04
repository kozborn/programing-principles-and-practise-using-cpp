#include "../std_lib_facilities.h"

struct Point {
  int x;
  int y;
  Point(): x(0), y(0) {};
  Point(int xx, int yy): x(xx), y(yy) {};
};

istream& operator>>(istream& is, Point& p) {
  is >> p.x >> p.y;
  return is;
}

int main() {
  try {
    string filename = "points.txt";
    // cout << "Enter output file: " << endl;
    // cin >> filename;
    Point p;
    vector<Point> points;
    ifstream ist(filename.c_str());
    if(!ist) error("Cannot open file ", filename);
    while (ist >> p)
    {
      points.push_back(p);
    }

    for(int i = 0; i < points.size(); ++i) {
      cout << "Point " << points[i].x << " " << points[i].y << endl;
    }

  } catch (...) {
    cerr << "Something went wrong" << endl;
  }
  return 0;
}