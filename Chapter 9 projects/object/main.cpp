#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mymessage;
    cout<<"Please enter the sentence"<<endl;
    cout<<" "<<endl;
    getline(cin, mymessage);
 cout<<"Displaying contents captured into mymessage"<<endl;
    cout<<mymessage;
    cout<<" "<<endl;
    return 0;
}
