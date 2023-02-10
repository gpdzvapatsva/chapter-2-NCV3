#include <iostream>
//header for mathematical functions
#include <cmath>
using namespace std;
//declaring the variables
float x1, x2;
int main()
{
// x2 + 14x + 45 = 0 a=0b01 b=14 c=0x2D
//calculating the roots of x1 and x2
x1=(-14+ sqrt((14*14)-4*1*0x2D))/(2*0b01);
x2=(-14- sqrt((14*14)-4*1*0x2D))/(2*0b01);
//Displaying the output
cout << "The value of x1 is :"<<x1<< endl;
cout << "The value of x2 is :"<<x2<< endl;
return 0;
}
