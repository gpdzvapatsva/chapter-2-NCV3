#include <iostream>
using namespace std;
// global scope
int num1 = 0;
string country;
int main()
{
while (num1 <=5) {
  cout << "Please enter a name of a country of your choice"<<endl;
  cin>>country;

  //introducing a break
  if (country == "South Africa"){
        cout<<"The rainbow nation"<<endl;
    break;
  }
  else{
     num1++;
  }

}
return 0;
}

