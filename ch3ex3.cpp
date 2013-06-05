/**
 *
 * Compilation: g++ ch3ex3.cpp error.cpp -o a 
 */
#include <iostream>
#include <cassert>
#include "error.h"
#include <string>
using namespace std;

string substr(const string &str, size_t pos, int n = -1);

int main() {
  string testing = "This is a message for testing.";
  //testing.substr(-5, 100);
  cout << "TESTING CASE: greater-than-str.size() n, substr(testing, 0, 100)" << endl;
  assert(testing.substr(0, 100) == substr(testing, 0, 100));
  cout << "TESTING testing.substr(0, 100) == substr(testing, 0, 100) passed" << endl;
  
  cout << "TESTING CASE: missing n, substr(testing, 0)" << endl;
  assert(testing.substr(0) == substr(testing, 0));
  cout << "TESTING testing.substr(0) == substr(testing, 0) passed" << endl;
  
  cout << "TESTING CASE: general case, substr(testing, 3, 10)" << endl;
  assert(testing.substr(3, 10) == substr(testing, 3, 10));
  cout << "TESTING testing.substr(3, 10) == substr(testing, 3, 10) passed" << endl;
  
  return 0;
}

string substr(const string &str, size_t pos, int n) {
  string newStr;
  if (pos > str.size() || pos < 0) {
    error("Invalid starting position");
  }

  if (n > str.size() || n == -1) {
    n = str.size();
  }
  for (int i = 0; i < n; i++) {
    newStr += str[pos + i];
  }
  //cout << "newStr: " << newStr << endl;
  return newStr;
}
