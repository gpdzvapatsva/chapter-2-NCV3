#include <iostream>
#include <cmath>
using namespace std;
//declaring variables
float x1, x2;
int main()
{
// 0b110x2 – 0b110000x − 0b110110 = 0 a=0b110, b=0b110000, c=0b110110
//processing
x1=(-(-0b110000)+ sqrt((0b110000*0b110000)-4* 0b110*-0b110110))/(2*0b110);
x2=(-(-0b110000)-sqrt((0b110000*0b110000)-4* 0b110*-0b110110))/(2*0b110);
//displaying the output
cout << "The value of x1 is :"<<x1 << endl;
cout << "The value of x2 is :"<<x2 << endl;
    return 0;
}
