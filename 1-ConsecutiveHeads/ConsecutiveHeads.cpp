/*
 * File: Combinations.cpp
 * ----------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the recursive combinations problem.
 * [TODO: rewrite the documentation]
 */

#include <iostream>
//#include "console.h"
#include "random.h"
using namespace std;

int main() {
   // [TODO: fill in the code]
  string result[2] = {"head", "tail"};
  unsigned totalFlips = 0;
  unsigned consecutiveCount = 0;
  while (consecutiveCount < 3) {
    if (randomChance(50) < 50) {
      cout << "head" << endl;
      consecutiveCount++;
    } else {
      cout << "tail" << endl;
      if (consecutiveCount >= 0) {
        consecutiveCount--;
      }
    }
  }
  return 0;
}
