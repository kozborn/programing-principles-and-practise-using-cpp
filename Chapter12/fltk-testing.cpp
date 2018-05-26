#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <stdexcept>

using namespace std;

int main(int argc, char **argv)
{

  try {
    Fl_Window *window = new Fl_Window(640, 480);
    Fl_Box *box = new Fl_Box(10, 10, 620, 460, "Hello, World!");
    box->box(FL_UP_BOX);
    box->labelfont(FL_BOLD + FL_ITALIC);
    box->labelsize(26);
    box->labeltype(FL_SHADOW_LABEL);
    window->end();
    window->show(argc, argv);
    return Fl::run();
  } catch (exception &e) {
    cerr << e.what() << endl;
  } catch (...) {
    cerr << "Something went very wrong" << endl;
  }
}
