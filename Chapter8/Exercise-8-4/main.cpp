// Find max fibonacci value in integer

#include "../../std_lib_facilities.h"
#include <limits>

int Fibonacci() {
  
  int prev = 0;
  int right = 1;
  int tmp = 0;
  int iterationCounter = 0;

  while(true) {
    if (right > 0 && right < std::numeric_limits<int>::max()) {
      ++iterationCounter;
      tmp = right;
      right = prev + right;
      cout << iterationCounter << " : " << right << endl;
      prev = tmp;
    }
    if (right < 0 || right > std::numeric_limits<int>::max()) break;
  }
  return iterationCounter;
}

int main() {
  try{
    cout << "Maximum int: " << std::numeric_limits<int>::max() << endl;
    cout << " << " << Fibonacci() << endl;
  } catch (range_error &e) {
    cout << e.what() << endl;
    return 1;
  } catch(...) {
    cout << "Something is fucked up" << endl;
    return 2;
  }
  return 0;
}