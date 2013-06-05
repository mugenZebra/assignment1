/*
 * File: NumericConversion.cpp
 * ---------------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the numeric-conversion problem
 * in which you implement the functions intToString and stringToInt.
 * [TODO: rewrite the documentation]
 */

// g++ NumericConversion.cpp StanfordCPPLib/random.cpp -o a

#include <iostream>
#include <string>
#include "StanfordCPPLib/random.h"
#include "climits"
//#include "console.h"
#include "cassert"
using namespace std;

/* Function prototypes */
string intToString(int n);
string intToString2(int n);
int stringToInt(string str);

/* Main program */

const int TESTNUM = 10;

int main() {
   // [TODO: fill in the code]
  int temp, temp1;
  string tempStr;
  cout << "intToString(0): " << intToString(0) << endl;  
  for (int i = 0; i < TESTNUM; i++) {
    temp = randomInteger(0, INT_MAX);
    cout << "intToString(" << temp << "): " << (tempStr = intToString(temp)) << endl;
    assert(stringToInt(tempStr) == temp);
  }
  
  cout << "intToString(-123121521): " << intToString(-123121521) << endl;
  
  
  cout << "intToString2(0): " << intToString2(0) << endl;  
  for (int i = 0; i < 10; i++) {
    temp = randomInteger(INT_MIN, INT_MAX);
    cout << "intToString2(" << temp << "): " << intToString2(temp) << endl;
  }
  
  cout << "stringToInt(0): " << stringToInt("0") << endl;

  for (int i = 0; i < TESTNUM; i++) {
    tempStr = intToString(temp1 = randomInteger(INT_MIN, INT_MAX));
    cout << "stringToInt(" << tempStr << "): " << (temp = stringToInt(tempStr)) << endl;
    assert(temp == temp1);
  }
  
  return 0;
}
string intToString(int n) {
  if (n < 0) {
    return string("-") + (-n / 10 ? intToString(-n / 10) : string("")) + char(-n % 10 + '0');  
  }
  return (n / 10 ? intToString(n / 10) : string("")) + char(n % 10 + '0');
} 

string intToString2(int n) {
  string str;
  if (n / 10 == 0) { // if n is zero
    return str + char(n % 10 + '0');
  }
  if (n < 0) {
    str = "-";
    return str + intToString2(-n);
  } else {
    return intToString2(n / 10) + char(n % 10 + '0');   
  }
}

int stringToInt(string str) {
  if (str.at(0) == '-') {
    return -1 * stringToInt(str.substr(1, str.size() - 1));
  }
  if (str.size() == 1) {
    return str[0] - '0';
  }
 
  return stringToInt(str.substr(0, str.size() - 1)) * 10 + int(str[str.size()-1] - '0');
}
