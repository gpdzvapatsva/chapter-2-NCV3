#include<iostream>
using namespace std;
int main()
{
int a, b;

cout<<"Enter the value of 'a'"<<endl;
cin>>a;

cout<<"Enter the value of 'b'"<<endl;
cin>>b;
int i=0;
while(i<5)
{

if(i==0)
{
a=a+b;
cout<<"The value of 'a' after a+ is = "<<a<<endl;
}
else if(i==1)
{
a-=b;
cout<<"The value of 'a' after a- is = "<<a<<endl;
}
else if(i==2)
{
a*=b;
cout<<"The value of 'a' after a* is = "<<a<<endl;
}
else if(i==3)
{
a/=b;
cout<<"The value of 'a' after a/ is = "<<a<<endl;
}
else
{
a%=b;
cout<<"The value of 'a' after a% is = "<<a<<endl;
}
i++;
}
}
