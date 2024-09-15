// GCD of two numbers
// Given two positive integers A and B, find GCD of A and B.
// Input: A = 3, B = 6
// Output: 3
// Explanation: GCD of 3 and 6 is 3
// Your Task:
// You don't need to read input or print anything. Complete the function gcd()
// which takes two positive integers as input parameters and returns an integer.
// Expected Time Complexity: O(log(min(A, B)))

#include <iostream>
using namespace std;

int findGCD(int a, int b) {
  if (a == 0)
    return b;
  if (b == 0)
    return a;

  while (a > 0 && b > 0) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }
  return a == 0 ? b : a;
}

int main() {
  int a, b;
  a = 60;
  b = 13;

  int res = findGCD(a, b);
  int lcm = a * b / res;
  cout << "GCD : " << res << endl;
  cout << "LCM : " << lcm << endl;
}