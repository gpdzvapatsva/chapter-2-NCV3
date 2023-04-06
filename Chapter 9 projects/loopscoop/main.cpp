/**
 * C program to find reverse of a number
 */

#include <iostream>
using namespace std;
int main()
{
    int num, reverse = 0;

    /* Input a number from user */
    cout<<"Enter any number to find reverse: ";
   cin>>num;

    /* Repeat the loop until value of num== 0 */
    while(num != 0 && length(num)>=2)
    {
        /*
         * Increase place value of reverse and
         * add last digit to reverse
         */
        reverse = (reverse * 10) + (num % 10);

        /* Remove last digit from 'num' */
        num =num/ 10;
    }

    cout<<"Reverse number is  : "<< reverse<<endl;

    return 0;
}
