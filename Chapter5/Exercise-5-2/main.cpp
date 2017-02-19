#include "../../std_lib_facilities.h"

double ctok(double c){
    int k = c + 273.15;
    //return int; // expected primary-expression before ‘int’
    return k;
}

int main(){
    double c = 0;
    // cin >> d; // ‘d’ was not declared in this scope
    cin >> c;
    // double k = ctok("c"); // cannot convert ‘const char*’ to ‘double’ for argument ‘1’ to ‘double ctok(double)’
    double k = ctok(c);
    // Cout << k << endl; // ‘Cout’ was not declared in this scope
    cout << k << endl;
    return 0;
}