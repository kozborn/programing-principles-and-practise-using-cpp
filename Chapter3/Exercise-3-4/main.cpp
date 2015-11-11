/* Write a program that prompts the user to enter two integer values. Store
 * these values in int variables named val1 and val2 . Write your program to
 * determine the smaller, larger, sum, difference, product, and ratio of these
 * values and report them to the user.
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "Program for calculating: \nsmaller, larger, sum, difference, product and ratio of two 'int' values!" << endl;
    int v1 = 0, v2 = 0;
    cout << "Enter two integer values:: " << endl;
    cin >> v1 >> v2;
    if (v1 < v2){
        cout << "Value: " << v1 << " is smaller than value: " << v2 << endl;
    } else if (v2 < v1) {
        cout << "Value: " << v2 << " is smaller than value: " << v1 << endl;
    } else {
        cout << "Values: " << v2 << ", " << v2 << " are equal." << endl;
    }

    if (v1 > v2){
        cout << "Value: " << v1 << " is larger than value: " << v2 << endl;
    } else if (v2 > v1) {
        cout << "Value: " << v2 << " is larger than value: " << v1 << endl;
    } else {
        cout << "Values: " << v2 << ", " << v2 << "are equal." << endl;
    }

    cout << "Sum: " << v1 << " + " << v2 << " = " << v1 + v2 << endl;
    cout << "Difference: " << v1 << " - " << v2 << " = " << v1 - v2 << endl;
    cout << "Produce: " << v1 << " * " << v2 << " = " << v1 * v2 << endl;
    cout << "Ratio: " << v1 << " / " << v2 << " = " << v1 / v2 << endl;


    return 0;
}

