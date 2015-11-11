/*
 * Write a program that prompts the user to enter three integer values, and
 * then outputs the values in numerical sequence separated by commas. So,
 * if the user enters the values 10 4 6 , the output should be 4, 6, 10 . If two
 * values are the same, they should just be ordered together. So, the input
 * 4 5 4 should give 4, 4, 5
 * I don't think it should be written with vectors, but ...
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Enter 3 integer values" << endl;
    vector<int> v;
    int value, counter = 0;
    while(counter < 3){
        cin >> value;
        v.push_back(value);
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

