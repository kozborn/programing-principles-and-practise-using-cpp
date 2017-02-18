#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void calculate(double v1, double v2,char oper);
int getNumber(string num);


int main()
{
    cout << "Exercise 4.7" << endl;
    cout << "Modify the “mini calculator” from exercise 4.5 to accept (just) single-digit" << endl;
    cout << "numbers written as either digits or spelled out" << endl;
    cout << "Enter two values and operator (<value> <value> <operand>). End with '|'" << endl;
    cout << endl;

    char oper;
    string arg1 = "", arg2 = "";
    int v1 = 0, v2 = 0;
    while(cin >> arg1 >> arg2 >> oper && oper != '|'){
        v1 = getNumber(arg1);
        v2 = getNumber(arg2);
        if(v1 != -1 && v2 != -1){
            cout << v1 << " " << oper << " " << v2 << " = " << v1 + v2 << endl;
        } else {
            cout << "Ups, something went wrong. Check logs above and try again." << endl;
        }
    }

    return 0;
}

int getNumber(string num){
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    istringstream iss(num);
    int number = -1;
    int enteredNumber = -1;
    if (!(iss >> number).fail()) {
        if(number >=0 && number <= 9) {
            enteredNumber = number;
            cout << "You have entered number " << numbers.at(number) << endl;
        } else {
            cout << "Don't know this number." << endl;
        }
    }
    else {
        for(auto& x: numbers){
            if (x == num) {
                enteredNumber = addressof(x) - addressof(numbers[0]);
                break;
            }
        }
        if(enteredNumber == -1)
            cout << "Don't know this number." << endl;
        else
            cout << "You have entered number: " << enteredNumber << endl;
    }
    return enteredNumber;
}

void calculate(double v1, double v2,char oper){
    double sum = 0;
    string var = "";
    switch(oper) {
        case '+':
            sum = v1 + v2;
            var = "sum";
            break;
        case '-':
            sum = v1 - v2;
            var = "difference";
            break;
        case '*':
            sum = v1 * v2;
            var = "product";
            break;
        case '/':
            sum = v1 / v2;
            var = "quotient";
            break;
        default:
            sum = 0;
    };
    cout << "The " << var << " of " << v1 << " and " << v2 << " is " << sum << endl;
}

