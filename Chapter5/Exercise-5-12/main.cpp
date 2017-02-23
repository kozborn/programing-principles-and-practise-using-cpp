#include "../../std_lib_facilities.h"

int main(){

    vector<int> numbers = {1,2,3,4};
    vector<int> user_numbers;
    int user_number = 0;
    bool guessed = false;

    try {
      while(!guessed){
        cout << "Please provide four numbers (0-9) separated by space" << endl;
        for(int i = 0; i < 4; ++i){
          cin >> user_number;
          if(user_number < 0 || user_number > 9) {
            cout << "number should be from 0-9" << endl;
            break;
          } else {
            user_numbers.push_back(user_number);
          }
          
        }
      }

    } catch(exception &e){
        cerr << "Error: " << e.what() << endl;
        return 1;
    }catch(...) {
        cerr << "Unknown error" << endl;
        return 2;
    }
    return 0;
}
