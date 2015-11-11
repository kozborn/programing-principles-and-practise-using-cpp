/*
 * Write a program that doesn’t do anything, but declares a number of vari-
 * ables with legal and illegal names (such as int double = 0; ), so that you
 * can see how the compiler reacts.
 */

#include <iostream>

using namespace std;

int main()
{
    int double = 0;
    int test = 0;
    double char = 'c';
    string test = 123;

    cout << "Do nothing!" << endl;
    return 0;
}

