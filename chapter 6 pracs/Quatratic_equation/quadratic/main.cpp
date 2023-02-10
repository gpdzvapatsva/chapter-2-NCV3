#include <iostream>
#include <cmath>
using namespace std;
//declaring the variables
float x1, x2;
int main()
{
//6x 2 − 48x − 54 = 0 a=6, b=48, c=54
//calculating the roots of x1 and x2
x1=(-48+ sqrt(48*48)-(4*6*54))/(2*6);
x1=(-48- sqrt(48*48)-(4*6*54))/(2*6);
//Displaying the output
cout << "The value of x1 is :"<<x1<< endl;
cout << "The value of x2 is :"<<x2<< endl;
return 0;
}
