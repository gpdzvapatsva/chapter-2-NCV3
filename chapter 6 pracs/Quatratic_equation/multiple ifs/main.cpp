// C++ Program to Nested-if conditions
//check qualification for funding to attend conferences

#include <iostream>
using namespace std;

int main()
{
double research_units=0;
char emp_status;
int contact_duration;
//Entering input
cout<<"Enter research units accumulated in the previous year"<<endl;
cin>>research_units;
cout<<"Enter your work status [c=contract, p=permanent]"<<endl;
cin>>emp_status;
if (research_units>=0.75) {
        if (emp_status =='p' || emp_status =='P')  {
            if (true) {
                cout << "Congratulations!! You qualify for international travel funding" << endl;
                    }
            else    {
                    cout << " You ONLY qualify for local travel funding" << endl;
                    }
        }
        else if (emp_status=='c'  || emp_status=='C'){
            cout<<"Enter your contract duration in years [0-9]"<<endl;
            cin>>contact_duration;
            if (contact_duration>=3){
                  cout << "Congratulations!! You qualify for international travel funding" << endl;
            }
            else{
                cout << " You ONLY qualify for local travel funding" << endl;
            }
        }
        else{
            cout << "Invalid employment status" << endl;
        }
}
    else{
        cout << "Unfortunately you ONLY qualify for local travel funding" << endl;
    }

    return 0;
}


