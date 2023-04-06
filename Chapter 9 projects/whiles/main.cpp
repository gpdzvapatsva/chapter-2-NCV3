//EXAMPLE of Nested if else
//Read a character a check whether it is VOWEL or CONSONANT
#include<iostream>
using namespace std;
int main()
{
    bool other_char;
char ch;
//reading a character
cout<<"Enter an alphabet: ";
cin>>ch;
while(cin){
	//condiion to check character is alphabet or not

	while( (ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{

other_char=(ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u');
//conditions to check character is VOWEL or not
		while( ch=='A' || ch=='a' || ch=='E' || other_char )
        {
          	cout<<"\""<<ch<<"\" is a VOWEL"<<endl;
            cout<<"Enter an alphabet1: ";
            cin>>ch;
            if(isalpha(ch)==0){
        cout<<"\""<<ch<<"\" is not an alphabet\n";
    return 0;
}
        }
        cout<<"\""<<ch<<"\" is a CONSONANT"<<endl;
		cout<<"Enter an alphabet_: ";
	cin>>ch;
if(isalpha(ch)==0){
        cout<<"\""<<ch<<"\" is not an alphabet\n";
    return 0;
}
	}
	cout<<"\""<<ch<<"\" is not an alphabet\n";
	return 0;
}
	return 0;
}
