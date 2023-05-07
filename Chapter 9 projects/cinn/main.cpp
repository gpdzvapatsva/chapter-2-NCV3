#include <iostream>
using namespace std;
//function prototype
int addition(int , int );
//declaring global variable;
int firstnumber =8;
int secondnumber;

int main()
{
secondnumber=7;
 int answer=addition(firstnumber, secondnumber);
 cout<<answer<<" ";
cout<<"The value of firstnumber is : "<< firstnumber<<" ";
    return 0;
}
int addition(int num1, int num2){
    num1=7;
    //modifying the value of a global variable
    firstnumber=num1;
    int answer = firstnumber + secondnumber;
    return answer;
}
