#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    cout << "Exercise 4.6" << endl;
    cout << "Make a vector holding the ten string values zero , one , . . . nine ." << endl;
    cout << "Use that in a program that converts a digit to its corresponding" << endl;
    cout << "spelled-out value; e.g., the input 7 gives the output seven . Have the same" << endl;
    cout << "program, using the same input loop, convert spelled-out numbers into" << endl;
    cout << "their digit form; e.g., the input seven gives the output 7 ." << endl;
    cout << endl;

    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string userInput = "";
    int number = -1;
    int index = -1;
    while(cin >> userInput && userInput != "!"){
        istringstream iss(userInput);
        if (!(iss >> number).fail()) {
            if(number >=0 && number <= 9) {
                cout << "You have entered number " << numbers.at(number) << endl;
            } else {
                cout << "Don't know this number" << endl;
            }
        }
        else {
            for(auto& x: numbers){
                if (x == userInput) {
                    index = addressof(x) - addressof(numbers[0]);
                    break;
                }
            }
            if(index == -1)
                cout << "Don't know this number" << endl;
            else
                cout << "You have entered number: " << index << endl;
        }
    }

    return 0;
}

