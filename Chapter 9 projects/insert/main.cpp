#include <iostream>
#include <string>
using namespace std;

int main()
{
cout<<"First comparison with similar strings returns ";
string str1("Cape Town: Mothercity.");
string str2("Cape Town: Mothercity.");
cout<< str1.compare(str2)<<endl;
cout<<"\n";

string str3(" Mothercity: Cape Town:");
string str4("Cape Town: Mothercity.");
cout<<"Comparison with first string appearing first returns ";
cout<< str3.compare(str4)<<endl;

cout<<"Comparison with second string appearing first returns ";
cout<< str4.compare(str3)<<endl;
    return 0;
}
