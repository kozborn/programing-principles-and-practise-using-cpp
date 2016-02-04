#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Exercise 4.3" << endl;
    cout << "Read a sequence of double values into a vector . Think of each value as " << endl;
    cout << "the distance between two cities along a given route. Compute and print" << endl;
    cout << "the total distance (the sum of all distances). Find and print the smallest" << endl;
    cout << "and greatest distance between two neighboring cities. Find and print the" << endl;
    cout << "mean distance between two neighboring cities." << endl;
    cout << "e.g. 1 2 33 4 5 3 2 3 2 3 |" << endl;

    vector<double> distances;

    for(double dist; cin >> dist;)
        distances.push_back(dist);

    if(distances.size() < 1)
        cout << "You should enter at least one distance!" << endl;
    double sum = 0;
    for(double x: distances)
        sum += x;

    sort(distances.begin(), distances.end());
    cout << "Total distance: " << sum << endl;
    cout << "Mean distance: " << sum/distances.size() << endl;
    cout << "Smallest distance: " << distances.at(0) << endl;
    cout << "Greatest distance: " << distances.at(distances.size() - 1) << endl;

    return 0;
}

