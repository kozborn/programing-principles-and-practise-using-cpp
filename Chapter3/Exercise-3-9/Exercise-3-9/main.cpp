/*
 * Write a program that converts spelled-out numbers such as “zero” and
 * “two” into digits, such as 0 and 2. When the user inputs a number, the
 * program should print out the corresponding digit. Do it for the values 0,
 * 1, 2, 3, and 4 and write out not a number I know if the user enters some-
 * thing that doesn’t correspond, such as stupid computer!
 */


#include <iostream>

using namespace std;

int main()
{
    cout << "Enter spelled number: " << endl;
    string spelled = "";
    int number;
    while(cin >> spelled && spelled != "q") {
        number = -1;
        if(spelled == "zero")
            number = 0;
        if(spelled == "one")
            number = 1;
        if(spelled == "two")
            number = 2;
        if(spelled == "three")
            number = 3;
        if(spelled == "four")
            number = 4;

        if(number == -1)
            cout << "not a number I know!" << endl;
        else
            cout << spelled << " is just " << number << " as a number!" << endl;

    }
    return 0;
}

