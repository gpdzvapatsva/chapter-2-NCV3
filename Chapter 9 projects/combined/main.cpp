#include<iostream>
using namespace std;
int outer =6;
int main()
{
while (outer>=1)
{
	for(int s=1; s<=6-outer; s++)
	cout<<" ";
	for (int innermost=1; innermost<=outer; innermost++)
	{
	cout<<"*";
	}
	cout<<endl;
	outer--;
}
	}
