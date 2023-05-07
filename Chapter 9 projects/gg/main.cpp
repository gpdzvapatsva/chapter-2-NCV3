#include <iostream>
using namespace std;
void Fib_Numbers();
int main()
{
Fib_Numbers();
 return 0;
}


void Fib_Numbers(){
int first_num, second_num, current, counter, nthFibonacci;
cout<<"Enter first fibonacci number"<<endl;
cin>>first_num;
cout<<"Enter the second number"<<endl;
cout<<"Enter the position of the desired Fibonacci number"<<endl;
cin>>second_num;
if (nthFibonacci==1){
    current=first_num;
}
else if (nthFibonacci==2){
    current=second_num;
}
else{
    counter=3;
    while (counter<=nthFibonacci){
        current=first_num+ second_num;
        first_num=second_num;
        second_num=current;
        counter++;
    }
}
cout<<"The Fibonacci number at position " << nthFibonacci << " is " <<current<< endl;
}
