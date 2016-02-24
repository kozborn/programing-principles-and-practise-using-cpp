#include <iostream>

using namespace std;

int main()
{
    cout << "Exercise 4.5" << endl;
    cout << "Write a program to play a numbers guessing game. The user thinks of a" << endl;
    cout << "number between 1 and 100 and your program asks questions to figure" << endl;
    cout << "out what the number is (e.g., “Is the number you are thinking of less than" << endl;
    cout << "50?”). Your program should be able to identify the number after asking" << endl;
    cout << "no more than seven questions. Hint: Use the < and <= operators and the" << endl;
    cout << " if-else construct" << endl << endl;

    cout << "Think about integer number between 1 and 100" << endl;
    int start = 1;
    int end = 100;
    int middle = 0;
    string confirm="no";

    for(int i=0;i<7;++i){
        middle = end - (end - start)/2;
        cout << "Is the number you are thinking of less(y) or equal(e) "<< middle << "?" << endl;
        cin >> confirm;
        if(confirm == "yes" || confirm=="y"){
            end = middle;
        } else if (confirm=="no" || confirm=="n"){
            start = middle;
        } else if (confirm=="equal" || confirm=="e"){
            cout << "Number you were thinking of is " << middle << endl;
            break;
        }

    }
    return 0;
}
