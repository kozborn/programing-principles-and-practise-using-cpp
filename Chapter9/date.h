#include <iostream>

#ifndef DATE_H
#define DATE_H

class Date
{
  public:
    enum Month
    {
      jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };
    class Invalid {};
    Date();
    Date(int y, Month m, int d);
    int year() { return y; }
    Month month() { return m; }
    int day() { return d; }
    bool check();

    friend std::ostream& operator<<(std::ostream& os, Date &d) {
      return os << d.year() << " " << d.month() << " " << d.day();
    }

  private:
    int y;
    Month m;
    int d;
};

#endif
