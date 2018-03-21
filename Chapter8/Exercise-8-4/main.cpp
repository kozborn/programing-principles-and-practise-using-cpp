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
  cout << "Maximum int: " << std::numeric_limits<int>::max() << endl;
  cout << " << " << Fibonacci() << endl;
  return 0;
}