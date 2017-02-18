#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Exercise 4.2" << endl;
    cout << "If we define the median of a sequence as “a number so that exactly as" << endl;
    cout << "many elements come before it in the sequence as come after it” find median value." << endl;
    cout << "Enter values separated with space e.g 1 2 3 4, " << endl;
    cout << "and finished with non-numerich character. " << endl;
    vector<double> temps;
    for(double temp; cin >> temp;){
        temps.push_back(temp);
    }

    if (temps.size() < 2){
        cout << "Program requires at least 2 values!" << endl;
        return 0;
    }

    double sum = 0;
    for(double x: temps){
        sum += x;
    }
    cout << "Average temperature: " << sum / temps.size() << endl;

    sort(temps.begin(), temps.end());
    double median = 0;

    if(temps.size() % 2){
        median = temps[temps.size()/2];
    } else {
        median = temps[temps.size()/2] + temps[(temps.size()/2) - 1];
        median /= 2;
    }

    cout << "Median temperature: " << median << endl;


    return 0;
}

