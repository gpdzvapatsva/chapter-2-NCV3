#include<iostream>
using namespace std;
int main()
{
    //accepting input
int s1,s2,s3;
cout<<"please enter first side of the triangle"<<endl;
cin>>s1;
cout<<"please enter second side of the triangle"<<endl;
cin>>s2;
cout<<"please enter third side of the triangle"<<endl;
cin>>s3;

if ((!(s1+s2>s3)) || (!(s1+s3>s2)) ||(!(s3+s2>s1))){
      cout<<"not a valid triangle"<<endl;
	   }
	   else{
	   //evaluating the conditions
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
	 return 0;
}
}
