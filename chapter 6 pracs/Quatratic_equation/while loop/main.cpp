#include <iostream>
using namespace std;
// global scope
int num1 = 100;
int main()
{cout << "Value of num1 in a global scope is: " << num1 << endl;
// local scope
  int num1 = 20;
  cout << "Value of num1 in a local scope is: " << num1 << endl;
  while (num1<350)
  {
       //block scope
       num1 = 350;
       cout << "Value of num1 in a block scope is: " << num1 << endl;
       }
 return 0;
}
