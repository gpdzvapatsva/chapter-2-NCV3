#include <iostream>

using namespace std;
 int i = 1;
 int num1,num2,gcd;
int main() {
// variable declaration for input
  // Taking input in variables
    cout<<"Enter First Number : ";
    cin>>num1;
    cout<<"Enter Second Number : ";
    cin>>num2;
  do{

    if (num1 % i == 0 && num2 % i == 0 ) {
     gcd = i;
 i++;
     }

    } while (i <= num1 && i <= num2 );
    cout<<"GCD : "<<gcd ;

return 0;
}
