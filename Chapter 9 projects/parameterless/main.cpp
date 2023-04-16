#include <iostream>
using namespace std;
//non parameter void function prototype
string myFullname();
int main()
{
    string result="";
//calling the function
result= myFullname();
cout<<result<<endl;
    return 0;
}

string myFullname(){
string fullname, firstname="", surname="";
cout<<"Please enter your first name"<<endl;
cin>>firstname;
cout<<"Please enter your surname"<<endl;
cin>>surname;
fullname="My fullname is " + firstname + " " + surname ;
return  fullname, "I am a string function";
}



