#include "../../std_lib_facilities.h"

int main(){
    vector<int> numbers;
    int x = 0;
    int num = 0;
    int sum = 0;
    cout << "Enter numbers separated by space (end with ctrl+d - linux) and end with '|'" << endl;
    try {

        while(cin >> x && !cin.eof()) { 
            numbers.push_back(x); 
        }
        cin.clear();
        cout << "How many of numbers should I sum? " << endl;
        cin >> num;
        if(num > numbers.size()) error("You can't add more numbers then array size");
        for(int i = 0; i < num; i++){
            sum += numbers.at(i);
        }
        cout << "Sum of numbers from 0 to " << num << "( " ;
        for(int i = 0; i < num; ++i){
            cout << numbers.at(i);
            if (i != (num - 2) && i != (num -1) && i != num) {
                cout << ", ";
            } else if (i==(num - 2)) {
                cout << " and ";
            }
        }
        cout << " )";
        cout << " equals " << sum << endl;

    } catch(exception &e){
        cerr << "Error: " << e.what() << endl;
        return 1;
    } catch(...) {
        cerr << "Unknown error" << endl;
        return 2;
    }
    return 0;
}
