#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

void checkWinner(string, string);
vector <string> choices = {"Rock", "Paper", "Scissors"};

int main()
{
    cout << "Exercise 4-10" << endl;
    cout << "Write a program that plays the game “Rock, Paper, Scissors.” If you are not "
         << "familiar with the game do some research (e.g., on the web using Google). "
         << "Research is a common task for programmers. Use a switch -statement to "
         << "solve this exercise. Also, the machine should give random answers (i.e.,"
         << "select the next rock, paper, or scissors randomly). Real randomness is too "
         << "hard to provide just now, so just build a vector with a sequence of values "
         << "to be used as “the next value.” If you build the vector into the program, "
         << "it will always play the same game, so maybe you should let the user enter"
         << "some values. Try variations to make it less easy for the user to guess "
         << "which move the machine will make next." << endl << endl;

    string userChoice = "";
    int computerChoice;
    const int min = 0;
    const int max = 2;
    string chooseText = "Pick your choice (Rock, Paper, Scissors). Finish with '!'";
    cout << chooseText << endl;

    while(cin >> userChoice && userChoice != "!"){
        computerChoice = min + (rand() % (int)(max - min + 1));
        checkWinner(userChoice, choices.at(computerChoice));
        cout << chooseText << endl;
    }

    return 0;
}

void checkWinner(string userChoice, string computerChoice){
    string temporaryString;
    // transforming compouter choice to lowercase
    temporaryString.resize(computerChoice.size());
    transform(computerChoice.begin(), computerChoice.end(), temporaryString.begin(), ::tolower);
    computerChoice = temporaryString;
    computerChoice[0] = toupper(computerChoice[0]);
    //transforming user choice to lowercase
    temporaryString.resize(userChoice.size());
    transform(userChoice.begin(), userChoice.end(), temporaryString.begin(), ::tolower);
    userChoice = temporaryString;
    userChoice[0] = toupper(userChoice[0]);
    if ( find(choices.begin(), choices.end(), userChoice) != choices.end() ){
        int position = find(choices.begin(), choices.end(), userChoice) - choices.begin();
        switch(position){
            case 0: // Rock
                cout << "User pick Rock" << endl;
            break;
            case 1: // Paper
                cout << "User pick Paper" << endl;
            break;
            case 2: // Scissors
                cout << "User pick Scissors" << endl;
            break;
        };
    }
    else{
        cout << "Don't have this possibility. Finish with '!'" << endl;
    }

}
