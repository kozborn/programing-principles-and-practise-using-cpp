#include "../../Simple_window.h"
#include "../../Graph.h"
#include <stdexcept>

int main() {
  try {
    using namespace Graph_lib;
    Point tl(100, 100);
    int radius = 70;
    int startX = 250;
    int startY = 300;
    Line_style contour = Line_style(Line_style::solid, 10);
    Simple_window win(tl, 800, 600, "Exercise #12/8 - drawing a olympic circles");
    Text t(Point(300, 200), "Olympic lines");
    t.set_font_size(34);
    win.attach(t);

    Circle blue(Point(startX, startY), radius);
    blue.set_color(Color::blue);
    blue.set_style(contour);
    win.attach(blue);

    Circle black(Point(startX + 2 * (radius + 10), startY), radius);
    black.set_color(Color::black);
    black.set_style(contour);
    win.attach(black);

    Circle red(Point(startX + 4 * (radius + 10), startY), radius);
    red.set_color(Color::red);
    red.set_style(contour);
    win.attach(red);

    Circle yellow(Point(startX + radius + 10, startY + radius), radius);
    yellow.set_color(Color::yellow);
    yellow.set_style(contour);
    win.attach(yellow);

    Circle green(Point(startX + radius + 10 + 2 * (radius + 10), startY + radius), radius);
    green.set_color(Color::dark_green);
    green.set_style(contour);
    win.attach(green);

    win.wait_for_button();
  } catch (...) {
    cerr << "Something went wrong" << endl;
  }
}