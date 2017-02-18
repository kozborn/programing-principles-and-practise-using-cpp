#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout << "Exercise 4.8" << endl
         << "Try to calculate the number of rice grains that the inventor asked for in"
         << "exercise 8 above. You’ll find that the number is so large that it won’t fit"
         << "in an int or a double . Observe what happens when the number gets too"
         << "large to represent exactly as an int and as a double . What is the larg-"
         << " est number of squares for which you can calculate the exact number of"
         << "grains (using an int )? What is the largest number of squares for which"
         << "you can calculate the approximate number of grains (using a double )" << endl
         << endl;

    //change type of result variable to observe what will happen
    long result = 1;
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

