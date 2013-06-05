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
//#include "StanfordCPPLib/simpio.h"
using namespace std;

int c(int n, int k);

int main() {
   // [TODO: fill in the code]
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j <= i; j++) {
//      cout << "c(" << i << ", " << j << "): " << c(i, j) << endl;  
      cout << c(i, j) << " ";
    }
      cout << endl;
  }
  return 0;
}
int c(int n, int k) {
  if (k == 0 || n == k) {
    return 1;
  }
  return c(n - 1, k - 1) + c(n - 1, k);
}
