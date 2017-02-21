#include "../../std_lib_facilities.h"

int main(){
    vector<double> numbers;
    vector<double> differences;
    double x = 0;
    int num = 0;
    double sum = 0;
    double diff = 0;
    cout << "Enter numbers separated by space (end with ctrl+d - linux)" << endl;
    try {

        while(cin >> x && !cin.eof()) { 
            numbers.push_back(x); 
        }
        cin.clear();
        cout << "How many of numbers should I sum? " << endl;
        cin >> num;
        if(num > numbers.size()) error("You can't calculats sum of more numbers then vector size");
        for(int i = 0; i < num; ++i){
            sum += numbers.at(i);
        }
        cout << "Sum of numbers from 0 to " << num;
        cout << " (";
        for(int i=0; i < num; ++i){
            cout << numbers.at(i);
            if(i < num - 1) cout << ", ";
        }
        cout << ")";
        cout << " equals " << sum << endl;

        for(int i=0; i < numbers.size() - 1; ++i){
            diff = numbers.at(i) - numbers.at(i+1);
            differences.push_back(diff);
        }
        cout << "Vector of differences" << endl;
        for(int i=0; i < differences.size(); ++i){
            cout << differences.at(i);
            if(i < (differences.size() - 1)) cout << ", ";
        }
        cout << endl;

    } catch(exception &e){
        cerr << "Error: " << e.what() << endl;
        return 1;
    }catch(...) {
        cerr << "Unknown error" << endl;
        return 2;
    }
    return 0;
}
