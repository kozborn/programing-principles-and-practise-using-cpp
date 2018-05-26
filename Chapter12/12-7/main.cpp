#include "../../Simple_window.h"
#include "../../Graph.h"
#include <stdexcept>

double LinearFnc(double x) {
  double a = 0.45;
  double b = 1.23;
  return (a * x) + b;
}

int main() {
  try {
    using namespace Graph_lib;

    Point tl(100, 100);
    Point axis_start(40, 360);
    Simple_window win(tl, 600, 400, "Empty title");

    Axis xa(Axis::x, axis_start, 280, 10, "X axis");
    Axis ya(Axis::y, axis_start, 280, 10, "Y axis");



    Polygon poly;
    poly.add(Point(300,200));
    poly.add(Point(350,100));
    poly.add(Point(400,200));

    Rectangle r(Point(300, 200), 100, 100);

    Function sine(sin, -100, 100, axis_start, 1000, 20,20);
    sine.set_color(Color::blue);

    Function linear(LinearFnc, -100, 100, axis_start, 1000, 20, 20);

    win.attach(xa);
    win.attach(ya);
    win.attach(sine);
    win.attach(poly);
    win.attach(r);
    win.attach(linear);

    win.set_label("Kanwa nr 2");
    win.wait_for_button();
  } catch (exception &e) {
    cerr << e.what() << endl;
  } catch (...) {
    cerr << "Something went very wrong" << endl;
  }
}