/*  C++ program to check number is palindrome or not using Function  */
#include<iostream>
using namespace std;
 void isPalindrome();
int main()
{
    isPalindrome();
    return 0;
}
void isPalindrome()
{
    int num, rev=0, remainder, temp_store;
    cout<<"Enter the Number: ";
    cin>>num;

   if (cin.fail()){
            cout<<"The input must be a number"<<endl;
        return;
    }

    temp_store = num;
    while(temp_store>0 )
    {
        remainder = temp_store%10;
        rev = (rev*10)+remainder;
        temp_store = temp_store/10;
    }
    if(rev==num)
        cout<<num <<" is a Palindrome Number";
    else
        cout<<num <<" is not a Palindrome Number";
    cout<<endl;

}
