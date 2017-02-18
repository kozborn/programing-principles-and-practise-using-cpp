#include <iostream>
#include <string>

using namespace std;

void calculate(double v1, double v2,char oper);

int main()
{
    cout << "Exercise 4.5" << endl;
    cout << "Write a program that performs as a very simple calculator. Your calculator" << endl;
    cout << "should be able to handle the four basic math operations — add, subtract," << endl;
    cout << "multiply, and divide — on two input values. Your program should prompt" << endl;
    cout << "the user to enter three arguments: two double values and a character to" << endl;
    cout << "represent an operation. If the entry arguments are 35.6 , 24.1 , and '+' , the" << endl;
    cout << "program output should be The sum of 35.6 and 24.1 is 59.7 . In Chapter 6" << endl;
    cout << "we look at a much more sophisticated simple calculator." << endl;
    cout << "" << endl;
    cout << "Enter two values and operator (<value> <value> <operand>). End with '|'" << endl;

    double v1, v2;
    char oper;
    while(cin >> v1 >> v2 >> oper && oper != '|'){
        calculate(v1, v2, oper);
    }

    return 0;
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



