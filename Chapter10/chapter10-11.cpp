#include "../std_lib_facilities.h"

const int not_a_reading = -7777;
const int not_a_month = -1;
const int implausible_min = -200;
const int implausible_max = 200;

struct Reading
{
  int day;
  int hour;
  double temperature;
};

istream &operator>>(istream &is, Reading &r)
{
  char ch1;
  if (is >> ch1 && ch1 != '(')
  {
    cout << "Sorry, couldn't read this" << endl;
    is.unget();
    is.clear(ios_base::failbit);
    return is;
  }
  char ch2;
  int d;
  int h;
  double temp;
  is >> d >> h >> temp >> ch2;
  if (!is || ch2 != ')')
    error("Not valid reading, expecting ')'");
  r.day = d;
  r.hour = h;
  r.temperature = temp;
  return is;
}

ostream &operator<<(ostream &os, Reading &r)
{
  os << '(' << r.day << ' ' << r.hour << ' ' << r.temperature << ')';
  return os;
}

bool is_valid(const Reading &r)
{
  return true;
}

bool is_valid(const Reading &r);

int month_to_int(const string &mm) {
  if(mm == "jan") return 1;
  if(mm == "feb") return 2;
  if(mm == "mar") return 3;
  if(mm == "apr") return 4;
  if(mm == "may") return 5;
  if(mm == "jun") return 6;
  if(mm == "jul") return 7;
  if(mm == "aug") return 8;
  if(mm == "sep") return 9;
  if(mm == "oct") return 10;
  if(mm == "nov") return 11;
  if(mm == "dec") return 12;
}

struct Day {
  vector<double> hour;
  Day();
};

ostream& operator<<(ostream& os, Day& d) {
  os << "Here goes day";
  return os;
}

Day::Day(): hour(24) {
  for(int i = 0; i < hour.size(); ++i) hour[i] = not_a_reading;
};

struct Month {
  int month;
  vector<Day> day;
  Month() :month(not_a_month), day(32) {}
};

ostream &operator<<(ostream &os, Month &m)
{
  os << "Here goes month";
  return os;
}

istream& operator>>(istream &is, Month &m) {
  char ch;
  if(is >> ch && ch !='{') {
    is.unget();
    is.clear(ios_base::failbit);
    return is;
  }

  string month_maker;
  string mm;
  is >> month_maker >> mm;
  if(is || month_maker != "month") error("Wrong start of monthly reading");
  m.month = month_to_int(mm);
  Reading r;
  int duplicates = 0;
  int invalids = 0;
  while(is >> r) {
    if(is_valid(r)) {
      if(m.day[r.day].hour[r.hour] != not_a_reading) ++duplicates;
      m.day[r.day].hour[r.hour] = r.temperature;
    } else {
      ++invalids;
    }
  }
  if(invalids) error("Wrong readings for month", invalids);
  if(duplicates) error("Duplicates for month", duplicates);
  return is;

}

struct Year {
  int year;
  vector<Month> month;
  Year() :month(12) {}
};

ostream &operator<<(ostream &os, Year &y)
{
  os << "Here goes year";
  return os;
}

int main() {
  try {
    Year y;
    Month m;
    Day d;
    Reading r;
    cout << "Now we'll try read reading " << endl;
    cin >> r;
    cout << "New reading " << r;

  } catch(...) {
    cerr << "Something went wrong" << endl;
  }
}