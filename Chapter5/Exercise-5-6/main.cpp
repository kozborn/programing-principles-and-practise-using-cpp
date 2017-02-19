#include "../../std_lib_facilities.h"

double ftoc(double f){
    double c = (f - 32) * 5/9;
    return c;
}

double ctof(double c){
    double f = c * 9/5 + 32;
    return f;
} 

int main(){
    double temp = 0;
    double result = 0;
    char c;
    cout << "Type a temperature and conversion type e.g. 100 c (c to f) or 200 f (f to c) " << endl;
    cin >> temp >> c;
    switch(c){
        case 'c':
            cout << "Celsius to fahrenheit = " << ctof(temp) << endl;
            break;
        case 'f':
            cout << "Fahrenheit to celsius = " <<  ftoc(temp) << endl;
            break;
        default:
            error("No idea what calculation you want!");
    }
    return 0;
}
