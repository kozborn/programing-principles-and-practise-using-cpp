#include "../../std_lib_facilities.h"

double ftoc(double f){
    double c_exact = (f - 32) * 5/9;
    int c = (f - 32) * 5/9;
    if(c != c_exact) error("Result cannot be represented as an integer");
    return c;
}

double ctof(double c){
    double f_exact = c * 9/5 + 32;
    int f = c * 9/5 + 32;
    if(f != f_exact) error("Result cannot be represented as an integer");
    return f;
}

int main(){
    double temp = 0;
    char c;
    try {
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
    } catch(exception& e){
        cout << "Error: " << e.what() << endl;
    } catch(...) {
        cout << "Unknown error" << endl;
    }
    return 0;
}
