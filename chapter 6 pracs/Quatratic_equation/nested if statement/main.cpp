#include<iostream>
using namespace std;
int main()
{
    // Declare and assign values to variables
int first_mark= 0;
int second_mark = 0;
cout<<"Enter the first mark" <<endl;
cin>>first_mark;
cout<<"Enter the second mark" <<endl;
cin>>second_mark;

if (first_mark >=50) { // first if condition : variable first_mark is checked
cout << " value of firstmark is: " << first_mark << endl;
if ( second_mark>=50) { // second if condition : variable second_mark is checked
cout << " value of second mark is: " << second_mark << endl;
int average= (first_mark+second_mark)/2;
cout<<"You got an average mark of "<< average<< "You have qualified for an award"<<endl;
}
cout << "You failed your second test" << endl;
}
else{
    cout << "You first mark is below 50%" << endl;
}
return 0;
}
