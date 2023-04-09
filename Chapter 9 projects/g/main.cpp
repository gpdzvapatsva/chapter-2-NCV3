#include <iostream>
using namespace std;
int main()
{
int age;
string firstname;
string country_code;
 cout<<"Enter you age"<< endl;
    cin>>age;
while (age>=18){
int counter=1;
     while (counter<3){
            cout<<"Enter your firstname"<< endl;
     cin>>firstname;
      cout<<"In which country where you born?"<< endl;
      cin>>country_code;
      cout<<country_code<<endl;
      if (country_code=="ZA" || country_code=="za") {
        cout<<"You are eligible to vote"<< endl;
             }
      else{
           cout<<"You are NOT eligible to vote"<< endl;
      }
      break;
        }
    }
    cout<<"You failed authentication- good bye"<< endl;
    return 0;
}
