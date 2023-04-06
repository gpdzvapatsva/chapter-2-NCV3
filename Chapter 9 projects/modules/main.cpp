#include <iostream>
using namespace std;
//global variable
double number_1= 53;
float result=0;
int main()
{
  cout << "The original value of number_1 is now :" << number_1<<endl;
cout << "The original value result is now  :" << result<<endl;
cout << "=====================================================================================" <<endl;
//assigning a new value for global variables: number_1 and result
number_1=84;
result=40;
cout << "The modified value of number_1 is now :" << number_1<<endl;
cout << "The modified value result is now  :" << result<<endl;
return 0;

}
