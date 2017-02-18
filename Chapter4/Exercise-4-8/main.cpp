#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout << "Exercise 4.8" << endl
         << "There is an old story that the emperor wanted to thank the inventor of" << endl
         << "the game of chess and asked the inventor to name his reward. The inven-" << endl
         << "tor asked for one grain of rice for the first square, 2 for the second, 4 for" << endl
         << "the third, and so on, doubling for each of the 64 squares. That may sound" << endl
         << "modest, but there wasn’t that much rice in the empire! Write a program to" << endl
         << "calculate how many squares are required to give the inventor at least 1000" << endl
         << "grains of rice, at least 1,000,000 grains, and at least 1,000,000,000 grains." << endl
         << "You’ll need a loop, of course, and probably an int to keep track of which" << endl
         << "square you are at, an int to keep the number of grains on the current" << endl
         << "square, and an int to keep track of the grains on all previous squares. We" << endl
         << "suggest that you write out the value of all your variables for each iteration" << endl
         << "of the loop so that you can see what’s going on" << endl
         << endl;

    unsigned long result = 1;
    vector <string> grains= {"", "", ""};
    vector <int> squares = {0,0,0};
    for(int i=0;i < 64; ++i){
        if(result > 1000){
            if(!squares[0]){
                squares[0] = i + 1;
                grains[0] = ("You'll need " + to_string(squares[0]) + " squares to get 1000 grains");
           }
        }
        if(result > 1000000){
            if(!squares[1]){
                squares[1] = i + 1;
                grains[1] = "You'll need " + to_string(squares[1]) + " squares to get 1.000.000 grains";
            }
        }
        if(result > 10000000000){
            if(!squares[2]){
                squares[2] = i + 1;
                grains[2] = "You'll need " + to_string(squares[2]) + " squares to get 1.000.000.000 grains";
            }
        }
        cout << "Iteration: " << i+1 << " : " << result << endl;
        result = result * 2;
    }
    for(auto x : grains){
        cout << x << endl;
    }

    return 0;
}

