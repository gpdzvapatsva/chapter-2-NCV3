#include <iostream>
using namespace std;
int main()
{
int num=0;
cout<<"Enter a number of your choice"<<endl;
cin>>num;

if(num%2==0){
   cout<<"It is an even number." <<endl;
}
//optional
  cout << "This statement is always executed since its outside the if block";
  return 0;
}
