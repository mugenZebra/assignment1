#include <iostream>
//#include "console.h"
#include "random.h"
using namespace std;

int main() {
   // [TODO: fill in the code]
  unsigned totalFlips = 0;
  unsigned consecutiveCount = 0;
  while (consecutiveCount < 3) {
    if (randomChance(0.5)) {
      cout << "head" << endl;
      consecutiveCount++;
    } else {
      cout << "tail" << endl;
      if (consecutiveCount > 0) {
        consecutiveCount = 0;
      }
    }
    totalFlips++;
  }
  cout << "It took " << totalFlips << " flips to get 3 consecutive heads." << endl;
  return 0;
}
