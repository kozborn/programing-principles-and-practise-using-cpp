#include "../../std_lib_facilities.h"

void print_vector(const vector<int> &vec) {
  for (auto const &a : vec) {
    cout << a << endl;
  }
}

int main() {
  cout << "Enter pairs (day temp) " << endl;

  string day;
  int temp;

  vector<int> pon;
  vector<int> tue;
  vector<int> wed;
  vector<int> thu;
  vector<int> fri;
  vector<int> sat;
  vector<int> sun;

  while(cin >> day && cin >> temp) {
    cout << "Day: " << day << " : " << temp << endl;
    transform(day.begin(), day.end(), day.begin(), ::tolower);
    if (day.compare("pon") == 0 || day.compare("poniedzialek") == 0) {
      pon.push_back(temp);
    }
    else if (day.compare("wto") == 0 || day.compare("wtorek") == 0)
    {
      tue.push_back(temp);
    }
    else if(day.compare("sro") == 0 || day.compare("sroda") == 0)
    {
      wed.push_back(temp);
    }
    else if (day.compare("czw") == 0 || day.compare("czwartek") == 0)
    {
      thu.push_back(temp);
    }
    else if (day.compare("pia") == 0 || day.compare("piatek") == 0)
    {
      fri.push_back(temp);
    }
    else if(day.compare("sob") == 0 || day.compare("sobota") == 0)
    {
      sat.push_back(temp);
    }
    else if (day.compare("ndz") == 0 || day.compare("niedziela") == 0)
    {
      sun.push_back(temp);
    }
    
  }


  return 0;
}