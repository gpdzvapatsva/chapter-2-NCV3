#include<iostream>
using namespace std;
int main()
{
char character;

	//reading a character
cout<<"Enter an alphabet: ";
cin>>character;

//condiion to check character is alphabet or not
if( (character>='A' && character<='Z') || (character>='a' && character<='z'))
	{
		//conditions to check character is VOWEL or not
		if( character=='A' || character=='a' || character=='E' || character=='e' || character=='I' || character=='i' || character=='O' || character=='o' || character=='U' || character=='u')
			cout<<"\""<<character<<"\" is a VOWEL"<<endl;
		else
			cout<<"\""<<character<<"\" is a CONSONANT"<<endl;
	}
	else
	{
		cout<<"\""<<character<<"\" is not an alphabet\n";
	}

	return 0;
}
