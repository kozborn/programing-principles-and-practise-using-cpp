#include "date.h"

Date &default_date()
{
  static Date dd(1970, Date::jan, 1);
  return dd;
}

Date::Date() : y(default_date().year()),
               m(default_date().month()),
               d(default_date().day())
{}

Date::Date(int y, Month m, int d): y(y), m(m), d(d)
{
  if(!check()) throw Date::Invalid();
}

bool Date::check() {
  if (m > 12 || m < 0) return false;
  if (d > 31 || d < 0) return false;
  return true;
}