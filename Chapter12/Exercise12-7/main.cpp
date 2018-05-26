#include "../../Simple_window.h"
#include "../../Graph.h"
#include <stdexcept>

int main() {
  try {
    using namespace Graph_lib;
    Point tl(100, 100);

    Color white(7);
    Color red(1);
    int houseHeight = 300;
    int houseLength = 500;
    int houseTopLeftX = 50;
    int houseTopLeftY = 250;
    Point houseTopLeftCorner(houseTopLeftX, houseTopLeftY);
    Simple_window win(tl, 800, 600, "Exercise #12/7 - drawing a home");
    Rectangle foundation(houseTopLeftCorner, houseLength, houseHeight);
    foundation.set_fill_color(white);
    Rectangle window(Point(houseTopLeftX+50, houseTopLeftY + 50), 90, 140);
    window.set_fill_color(Color::blue);
    Rectangle window2(Point(houseTopLeftX+370, houseTopLeftY + 50), 90, 140);
    window2.set_fill_color(Color::blue);
    Line windowInnerBorder(Point(houseTopLeftX + 50 + 45, houseTopLeftY + 50), Point(houseTopLeftX + 50 + 45, houseTopLeftY + 50 + 140));
    Line windowInnerBorder1(Point(houseTopLeftX + 50, houseTopLeftY + 50 + 45), Point(houseTopLeftX + 50 + 90, houseTopLeftY + 50 + 45));
    Line windowInnerBorder2(Point(houseTopLeftX + 50, houseTopLeftY + 50 + 90), Point(houseTopLeftX + 50 + 90, houseTopLeftY + 50 + 90));

    Line windowInnerBorder3(Point(houseTopLeftX + 370 + 45, houseTopLeftY + 50), Point(houseTopLeftX + 370 + 45, houseTopLeftY + 50 + 140));
    Line windowInnerBorder4(Point(houseTopLeftX + 370, houseTopLeftY + 50 + 45), Point(houseTopLeftX + 370 + 90, houseTopLeftY + 50 + 45));
    Line windowInnerBorder5(Point(houseTopLeftX + 370, houseTopLeftY + 50 + 90), Point(houseTopLeftX + 370 + 90, houseTopLeftY + 50 + 90));

    Rectangle door(Point(houseTopLeftX + 200, houseTopLeftY+ 100), 110, 200);
    Color brown(7);
    door.set_fill_color(brown);
    Circle doorHandle(Point(houseTopLeftX + 200 + 100, houseTopLeftY+ 100 + 100), 2);
    Closed_polyline roof;
    roof.add(houseTopLeftCorner);
    roof.add(Point(houseTopLeftX + int (houseLength / 2), houseTopLeftY - 200));
    roof.add(Point(houseTopLeftX + houseLength, houseTopLeftY));
    roof.set_fill_color(red);
    win.attach(foundation);
    win.attach(roof);
    win.attach(window);
    win.attach(windowInnerBorder);
    win.attach(windowInnerBorder1);
    win.attach(windowInnerBorder2);
    win.attach(window2);
    win.attach(windowInnerBorder3);
    win.attach(windowInnerBorder4);
    win.attach(windowInnerBorder5);
    win.attach(door);
    win.attach(doorHandle);
    win.wait_for_button();
  } catch (...) {
    cerr << "Something went wrong" << endl;
  }
}