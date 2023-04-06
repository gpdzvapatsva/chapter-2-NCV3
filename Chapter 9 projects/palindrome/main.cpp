#include<iostream>
using namespace std;
int main()
{
	int i=1,j,k,n;
	do
	{
		j=i;
		do
		{
			cout<<" ";
			j++;
		}
		while(j<=5);

		k=1;
		do
		{
			cout<<"*";
			k++;
		}
		while(k<=5);
		i++;
		cout<<endl;
	}
	while(i<=5);
}
