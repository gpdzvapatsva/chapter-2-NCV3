#include <iostream>
#include <iomanip>
int main()
{
using namespace std;
int first_number;
int second_number;
cout<<"Please enter the value of first number"<<endl;
cin >> first_number;
cout<<"Please enter the value of second number"<<endl;
cin >> second_number;
//relational and logical operators
cout << ((first_number < 50) && (first_number < second_number) )<< endl;
return 0;
}
