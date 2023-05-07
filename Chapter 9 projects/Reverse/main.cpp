#include<iostream>
using namespace std;
int main()
{
    string names[5];
    cout<<"Enter 5 Array Elements: " <<endl;
    for(int i=0; i<5; i++)
        cin>>names[i];
    cout<<"\nThe original Array is:\n";
    for(int i=0; i<5; i++)
        cout<<names[i]<<" ";
    cout<<"\n\nThe reversed array is :\n";
    for(int i=(5-1); i>=0; i--)
        cout<<names[i]<<" ";
    cout<<endl;
    return 0;
}
