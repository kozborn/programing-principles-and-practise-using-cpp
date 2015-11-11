/*
 * Write a program that prompts the user to enter three names, and
 * then outputs the values in order separated by commas. So,
 * I don't think it should be written with vectors, but ...
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Enter 3 names: " << endl;
    vector<string> v;
    int counter = 0;
    string name = "";
    while(counter < 3){
        cin >> name;
        v.push_back(name);
        ++counter;
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < (int) v.size(); ++i){
        cout << v.at(i);
        if(i < (int) v.size() -1)
           cout << ", ";
    }
    cout << endl;
    return 0;
}

