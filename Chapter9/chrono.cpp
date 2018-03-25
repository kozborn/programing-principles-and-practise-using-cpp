#include "./chrono.h"

namespace Chrono {
  Date &default_date()
  {
    static Date dd(1970, Date::jan, 1);
    return dd;
  }

  Date::Date(): y(default_date().year()),
                m(default_date().month()),
                d(default_date().day())
  {
  }

  Date::Date(int yy, Month mm, int dd) : y(yy), m(mm), d(dd)
  {
    if (!is_date(yy, mm, dd))
      throw Date::Invalid();
  }

  bool is_date(int y, Date::Month m, int d) {
    if ( d<=0 ) return false;
    if (m<Date::jan || m>Date::dec) return false;
    int days_in_month = 31;
    switch(m) {
      case Date::feb:
        days_in_month = (leapyear(y)? 29 : 28);
        break;
      case Date::apr: case Date::jun: case Date::sep: case Date::nov:
        days_in_month = 30;
        break;
    }

    if(days_in_month < d) return false;
    return true;
  }

  bool leapyear(int y) {
    //TODO
    return false;
  }

  bool operator==(const Date &a, const Date &b) {
    return a.year() == b.year() &&
      a.month() == b.month() &&
      a.day() == b.day();
  }

  bool operator!=(const Date &a, const Date &b) {
    return !(a==b);
  }

  std::ostream &operator<<(std::ostream &os, const Date &d) {
    return os << '(' << d.year() << ',' << d.month() << ',' << d.day() << ')';
  }

  std::istream &operator>>(std::istream &is, Date &date) {
    int y, m ,d;
    char ch1, ch2, ch3, ch4;
    is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4;
    if(!is) return is;
    if(ch1!='(' || ch2!=',' || ch3!=',' || ch4!=')') {
      is.clear(std::ios_base::failbit);
      return is;
    }
    return is;
  }
  enum Day {
    sunday, monday, tuesday, wednesday, thursday, friday, saturday
  };

  Day day_of_week(const Date &d) {
    //
    return sunday;
  }

  Date next_sunday(const Date &d) {
    return d;
  }

  Date next_weekend(const Date &d) {
    return d;
  }

}