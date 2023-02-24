#include <iostream>
using namespace std;
int main() {
    int month;
    cout<<"Enter Month in form of an integer between 1 and 12"<<endl;
    cin>>month;

    /* Input Validation */
    if(month < 1 || month > 12){
     cout<<"Invalid Input !!!!\n"<<endl;
     return 0;
    }

    if(month == 2) {
        cout<<" 28 or 29 Days in month "<<endl;
    } else if(month == 4 || month == 6 || month == 9 ||
        month == 11) {
        cout<<" 30 Days in Month "<<endl;
    } else if (month == 1 || month == 3 || month == 5 ||
        month == 7 || month == 8 || month == 10 || month == 12) {
        cout<<" 31 Days in month "<<endl;
    }

    return 0;
}
