#include "../../std_lib_facilities.h"

double ctok(double c){
    if (c < -273.15){
        error("-273.15 celsius is the lowest temperature possible (Zero absolute)!");
    }
    double k = c + 273.15;
    return k;
}

double ktoc(double k){
    if(k < 0){
        error("0 kelvin is the lowest temperature possible (Zero absolute)!");
    }
    double c = k - 273.15;
    return c;
}

int main(){
    double temp = 0;
    double result = 0;
    char c;
    cout << "Type a temperature and conversion type e.g. 100 c (c to k) or 200 k (k to c)" << endl;
    try{
        cin >> temp >> c;
        switch(c){
            case 'c':
                cout << "Celsius to kelvin = " << ctok(temp) << endl;
                break;
            case 'k':
                cout << "Kelvin to celcius = " <<  ktoc(temp) << endl;
                break;
            default:
                error("No idea what calculation you want!");
        }
    } catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    } catch (...) {
        cout << "Unknown error" << endl;
    }
    return 0;
}
