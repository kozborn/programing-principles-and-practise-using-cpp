#include <iostream>

#ifndef CHRONO_H
#define CHRONO_H

namespace Chrono {
  class Date
  {
  public:
    enum Month
    {
      jan = 1,
      feb,
      mar,
      apr,
      may,
      jun,
      jul,
      aug,
      sep,
      oct,
      nov,
      dec
    };
    class Invalid
    {};
    Date();
    Date(int y, Month m, int d);
    int year() const { return y; } // const means that we won't modify anything
    Month month() const { return m; }
    int day() const { return d; }

    void add_day(int n);
    void add_month(int n);
    void add_year(int n);

    private:
      int y;
      Month m;
      int d;
  };

  bool is_date(int y, Date::Month, int d);
  bool leapyear(int y);
  bool operator==(const Date &a, const Date &b);
  bool operator!=(const Date &a, const Date &b);
  std::ostream& operator<<(std::ostream &os, const Date &d);
  std::istream& operator>>(std::istream &is, Date &dd);
}

#endif
