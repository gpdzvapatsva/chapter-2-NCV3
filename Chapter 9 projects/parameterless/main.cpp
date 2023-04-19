#include <iostream>
using namespace std;
//declare a function prototype of boolean type
double larger();
int main() {
    double biggest=0;
    biggest=larger();
    cout<<"the larger number is "<< biggest<<endl;
return 0;
  }


double larger()
{
double num1, num2;
cin>>num1;
cin>> num2;
double largest;
if (num1>= num2){
largest = num1;
}
else{
largest = num2;
}
return largest;
}
