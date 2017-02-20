#include "../../std_lib_facilities.h"

int main(){
    vector<double> numbers = {1,1};
    int imax = std::numeric_limits<int>::max();
    int sum = 0;
    cout << imax << endl;
    int i = 2;
    try {
        while(true){
            if((numbers.at(i-1) + numbers.at(i-2)) < imax){
                numbers.push_back(numbers.at(i-1) + numbers.at(i-2));
            } else {
                for(int i=0; i < numbers.size(); ++i){
                    cout << std::setprecision (15)<< numbers.at(i) << endl;
                }
                
                break;
            }
            ++i;
        }
        cout << endl << "Reached maximum integer value: " << numbers.at(numbers.size()-1) << endl;
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
