#include <iostream>
#include <string>
using namespace std;

int main() {
  int test1_mark;

  // take input from users
  cout << "Enter your mark in % for test1: ";
  cin >> test1_mark;

//condition
  string result = (test1_mark >= 50) ? "passed" : "failed";

  cout << "You  " << result << " test 1";

  return 0;
}
