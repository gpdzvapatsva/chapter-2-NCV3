/* isalpha and toupper example */
#include <iostream>
using namespace std;
int main ()
{
 char gender;
       cout<<"Enter a char"<<"\n";
       cin>>gender;
  if (cin.fail()){
        cout<<"This is not a character"<<"\n";
  }
  else{
 cout<<"entry is a character"<<"\n";
  }
}
