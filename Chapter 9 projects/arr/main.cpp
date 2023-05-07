#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
    int lotto_numbers[6];
          srand(time(0));
       int num;
        cout<<" The random number are: ";
       for (int i=0; i<=5; i++){

       lotto_numbers[i] =1+ rand() % 42;


       }
    int  n=sizeof(lotto_numbers)/sizeof(lotto_numbers[0]);
 sort(lotto_numbers,lotto_numbers+n );

       for (int x: lotto_numbers){
        cout<<x<< " ";
       }
    return 0;
}
