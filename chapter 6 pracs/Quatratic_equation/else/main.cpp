#include<iostream>
using namespace std;
int main()
{
	 int s1,s2,s3;
	 cout<<"please enter first side of the triangle"<<endl;
	 cin>>s1;
	  cout<<"please enter first side of the triangle"<<endl;
	  cin>>s2;
	   cout<<"please enter first side of the triangle"<<endl;
	   cin>>s3;
	 if(s1==s2 && s2==s3)
	 {
	 	cout<<"This is an equilateral triangle"<<endl;
	 }
	 else if(s1==s2||s1==s3 || s2==s3)
	 {
	 	cout<<"This is an isosceles triangle"<<endl;
	 }
	 else
	 {
	 	cout<<"This is a scalene triangle";
	 }
}
