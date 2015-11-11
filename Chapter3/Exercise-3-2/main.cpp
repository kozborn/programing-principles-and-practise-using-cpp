/*
 * Write a program in C++ that converts from miles to kilometers. Your
 * program should have a reasonable prompt for the user to enter a number
 * of miles. Hint: There are 1.609 kilometers to the mile.
 */

#include <iostream>

using namespace std;

const double scale = 1.609;

int main()
{
    double miles = 0;
    double kilometers = 0;

    cout << "Converter from miles to kilometers." << endl;
    cout << "Enter miles: " << endl;
    cin >> miles;
    kilometers = miles * scale;
    cout << miles << " miles is equal to " << kilometers << " kilometers." << endl;

    return 0;
}

