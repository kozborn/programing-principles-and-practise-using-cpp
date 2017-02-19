#include "../../std_lib_facilities.h"

double calcDelta(double a, double b, double c){
    double x = b - (4*a*c);
    if(x < 0){
        string err = "Delta is equal";
        err += to_string(x);
        err += ". This formula has no real solution";
        error(err);
    }
    return x;
}

double sqr(double a, double b, double c){
    double b_power = pow(b, 2);
    return sqrt(b_power - 4 * a * c);
}

double x0(double a, double b, double c){
    return -b / (2 * a);
}

double x1(double a, double b, double c){
    double res = (-b - sqr(a,b,c)) / 2 * a;
    return res;
}

double x2(double a, double b, double c){
    double res = (-b + sqr(a,b,c)) / 2 * a; 
    return res;
}

int main(){
    double a = 0;
    double b = 0;
    double c = 0;
    double delta = 0;
    try {
        cout << "Type a b c factor to formula a*x^2 + b*x + c" << endl;
        cin >> a >> b >> c;
        delta = calcDelta(a,b,c);
        cout << "Delta is equal= " << delta << endl;
        if (delta == 0){
            cout << "This formula has only one solution: " << x0(a,b,c) << endl;
        } else {
            cout << "This formula has two solutions, x1= " << x1(a,b,c) << " and x2= " << x2(a,b,c) << endl;
        }
    } catch(exception& e){
        cout << "Error: " << e.what() << endl;
    } catch(...) {
        cout << "Unknown error" << endl;
    }
    return 0;
}
