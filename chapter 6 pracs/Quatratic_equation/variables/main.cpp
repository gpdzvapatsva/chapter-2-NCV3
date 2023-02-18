#include <iostream>
#include <cmath>
using namespace std;
int main() {
//variable declaration
int age=0;
cout<<"Please enter your age"<<endl;
cin>>age;
//range check
if (isnan(age))
    while(age < 0 || age > 123) {
  cout << "Invalid age, re-enter: ";
  cin >> age;
}

else
cout << "\nEntered character is not"
" a numeric character";

	return 0;
}
