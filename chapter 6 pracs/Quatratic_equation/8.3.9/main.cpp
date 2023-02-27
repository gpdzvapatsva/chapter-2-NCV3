#include <iostream>
using namespace std;

int main()  {
    int num1, num2, num3, max;
    cout<<"Enter Three Integers\n");
   cin>>num1>>num2>>num3;

    if(num1 > num2){
        if(num1 > num3)
            max = num1;
        else
            max = num3;
    } else {
        if(num2 > num3)
            max = num2;
        else
            max = num3;
    }

    /* Print Maximum Number */
    cout<<"The largest number is "<< max<<endl;

    return 0;
}
