/*
 * Write a program that takes an operation followed by two operands and
 * outputs the result. For example:
 * + 100 3.14
 * * 4 5
 * Read the operation into a string called operation and use an
 * if-statement to figure out which operation the user wants, for example,
 * if (operation=="+"). Read the operands into variables of type double.
 * Implement this for operations called +, –, *, /, plus, minus, mul, and div
 * with their obvious meanings.
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter operation you would perform as <operation> <operand> <operand>:" << endl;
    string operation = "";
    double operand1 = 0.0, operand2 = 0.0;
    double result = 0.0;
    while(cin >> operation >> operand1 >> operand2){
        if(operation == "+" || operation == "plus"){
            result = operand1 + operand2;
        } else if (operation == "-" || operation == "minus"){
            result = operand1 - operand2;
        } else if (operation == "*" || operation == "multiply"){
            result = operand1 * operand2;
        } else if (operation == "/" || operation == "divide"){
            result = operand1 / operand2;
        }

        cout << operand1 <<" " << operation << " " << operand2 << " = " << result << endl;
    }
    return 0;
}

