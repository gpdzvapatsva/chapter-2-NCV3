#include <iostream>
using namespace std;
//function prototype
void isPalindrome();
int main()
{
    //calling a parameterless function
   isPalindrome();
    return 0;
}

void isPalindrome()
{
    int num, reversed=0, remainder, temp_store;
    cout<<"Enter the Number: ";
    cin>>num;
    //validating the input
    if (cin.fail()){
            cout<<"The input must be a number"<<endl;
    return;
    }
    temp_store = num;
    //checking for palindrome using a while loop
    while(temp_store>0)
    {
        remainder = temp_store%10;
        reversed = (reversed*10)+remainder;
        temp_store = temp_store/10;
    }
    if(reversed==num)
          cout<<num<< " is a Palindrome Number";
    else
        cout<<num<< " is not a Palindrome Number";
    cout<<endl;

}
