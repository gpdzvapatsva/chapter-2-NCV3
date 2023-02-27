#include <iostream>
using namespace std;

int main()  {
    int num1, num2, num3, max_n;
    cout<<"Enter Three Integers\n"<<endl;
   cin>>num1>>num2>>num3;

    if(num1 > num2){
        if(num1 > num3)
            max_n = num1;
        else
            max_n = num3;
    } else {
        if(num2 > num3)
            max_n = num2;
        else
            max_n = num3;
    }

    /* Print Maximum Number */
    cout<<"The largest number is "<< max_n<<endl;

    return 0;
}
