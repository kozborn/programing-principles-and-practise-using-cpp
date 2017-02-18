/*
 * Write a program that prompts the user to enter some number of pennies
 * (1-cent coins), nickels (5-cent coins), dimes (10-cent coins), quarters
 * (25-cent coins), half dollars (50-cent coins), and one-dollar coins
 * (100-cent coins). Query the user separately for the number of each size
 * coin, e.g., “How many pennies do you have?” Then your program should
 * print out something like this:
 * You have 23 pennies.
 * You have 17 nickels.
 * You have 14 dimes.
 * You have 7 quarters.
 * You have 3 half dollars.
 * The value of all of your coins is 573 cents.
 * Make some improvements: if only one of a coin is reported, make the
 * output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes).
 * Also, report the sum in dollars and cents, i.e., $5.73 instead of 573 cents.
 */


#include <iostream>

using namespace std;

string prepareGrammar(int value, string s){
    if(s == "penny"){
        if (value > 1)
            return "pennies";
        else
            return s;
    }

    if(value == 1)
        return s;
    else
        return s + "s";
}

int main()
{
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int half_dollars = 0;
    double sum = 0.0;

    cout << "How many pennies do you have?" << endl;
    cin >> pennies;
    cout << "How many nickels do you have?" << endl;
    cin >> nickels;
    cout << "How many dimes do you have?" << endl;
    cin >> dimes;
    cout << "How many quarters do you have?" << endl;
    cin >> quarters;
    cout << "How many half dollars do you have?" << endl;
    cin >> half_dollars;

    cout << "You have " << pennies << " " << prepareGrammar(pennies, "penny") << "." << endl;
    cout << "You have " << nickels << " " << prepareGrammar(nickels, "nickel") << "." << endl;
    cout << "You have " << dimes << " " << prepareGrammar(dimes, "dime") << "." << endl;
    cout << "You have " << quarters << " " << prepareGrammar(quarters, "quarter") << "." << endl;
    cout << "You have " << half_dollars << " " << prepareGrammar(half_dollars, "half dollar") << "." << endl;

    sum = (pennies * 1) + (nickels * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50);
    cout << "The value of all your coins is $" << sum / 100 << " (" << sum << " in cents)" << endl;

    return 0;
}

