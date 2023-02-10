#include <iostream>
using namespace std;
 int a = 25;
 int b= 5;
 int answer = 0;
int main()
{
    //addition-Adds two operands and store answer in the third
    answer =a +b;
    cout << a <<" + "<<b<<" = "<<answer<< endl;
     //subtraction-Subtracts second operand from the first and store answer in the third
    answer =a -b;
    cout << a <<" - "<<b<<" = "<<answer<< endl;

     //multiplication-Multiplies two operandsand store answer in the third
    answer =a * b;
    cout << a <<" x "<<b<<" = "<<answer<< endl;

  //division-Divides first operand by the second operand
    answer =a / b;
    cout << a <<" / "<<b<<" = "<<answer<< endl;

    //division-Returns the remainder an integer division
    answer =a % b;
    cout << a <<" % "<<b<<" = "<<answer<< endl;
    return 0;
}
