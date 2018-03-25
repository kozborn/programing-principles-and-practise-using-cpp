#include "../../std_lib_facilities.h"
#include <exception>
#include "../date.h"

int main() {
  try {
    cout << "Simple date class" << endl;
    Date d(2000, Date::may, 12);
    Date d2;
    cout << d.year() << " " << d.month() << " " << d.day() << endl;
    cout << "Date: " << d << endl;
    cout << "Date2: " << d2 << endl;
  } catch (Date::Invalid) {
    cerr << "Wrong date provided" << endl;
  } catch (exception &e) {
    cerr << e.what() << endl;
  } catch (...) {
    cerr << "Something went wrong" << endl;
  }
  return 0;

}
