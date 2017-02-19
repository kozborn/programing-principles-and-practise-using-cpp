#include "../../std_lib_facilities.h"

double ctok(double c){
    if (c < -273.15){
        error("-273.15 celsius is the lowest temperature possible (Zero absolute)!");
    }
    int k = c + 273.15;
    return k;
}

int main(){
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << endl;
    return 0;
}