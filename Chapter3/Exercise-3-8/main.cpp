/*
 * Write a program to test an integer value to determine if it is odd or
 * even. As always, make sure your output is clear and complete. In other
 * words, don’t just output yes or no . Your output should stand alone,
 * like The value 4 is an even number .
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter integer value (enter letter to end):" << endl;
    int val = 0;
    while (cin >> val){
        if((val % 2) == 0){
            cout << "Value is even" << endl;
        } else {
            cout << "Value is odd" << endl;
        }
    }
    return 0;
}

