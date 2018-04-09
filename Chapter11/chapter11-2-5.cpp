#include "../std_lib_facilities.h"

struct Person {
  string name;
  string lastName;
  string email;
  Person(string n, string ln, string e): name(n), lastName(ln), email(e) {}
};

ostream& operator<<(ostream& os, const Person& p) {
  // left is for left align
  os << left << setw(10) << p.name << setw(15) << p.lastName 
    << setw(30) << p.email;
}


int main() {
  try {
    cout << "Program for setting with of field when outputting text" << endl; 
    Person p1("Piotr", "Kozubek", "piotrkozubek@gmail.com");
    Person p2("Anna", "Kozubek", "annakozubek@gmail.com");
    Person p3("Grzegorz", "Purgal", "purec@gmail.com");
    Person p4("Ievgen", "Martynov", "imartynov@gmail.com");
    Person p5("Artur", "Nowak", "anowak@gmail.com");

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    cout << p4 << endl;
    cout << p5 << endl;

  } catch(...) {
    cout << "Something went very bad" << endl;
  }
  return 0;
}
