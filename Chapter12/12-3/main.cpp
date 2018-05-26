#include "../../Simple_window.h"
#include "../../Graph.h"
#include <stdexcept>

int main() {
  try {
    using namespace Graph_lib;

    Point tl;

    Simple_window win(tl, 600, 400, "Dupa zbita");

    Polygon poly;

    poly.add(Point{200, 200});
    poly.add(Point{350, 100});
    poly.add(Point{350, 200});

    poly.set_color(Color::red);

    win.attach(poly);

    win.wait_for_button();
  } catch (exception &e) {
    cerr << e.what() << endl;
  } catch (...) {
    cerr << "Something went very wrong" << endl;
  }
}