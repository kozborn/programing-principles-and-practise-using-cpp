#include <iostream>
#include <stdexcept>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

using namespace std;

int main() {
  try {
    


  } catch (exception &e) {
    cerr << e.what() << endl;
  } catch (...) {
    cerr << "Something is very wrong" << endl;
  }
}