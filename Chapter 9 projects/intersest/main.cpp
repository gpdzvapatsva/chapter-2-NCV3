#include <iostream>
#include <iomanip>
using namespace std;
double  calc_SI();
int main()
{
  double simple_interest=0;
 simple_interest= calc_SI();
 cout<<setprecision(2)<<fixed<<endl;
   cout<<"\nSimple Interest Amount: R"<<simple_interest;
   cout<<endl;
   return 0;
}
//float find_si(float a, float b, float c)
double calc_SI()
{ double  p, r, t, si;
   cout<<"Enter Principle Amount: ";
   cin>>p;
   cout<<"Enter Rate of Interest: ";
   cin>>r;
   cout<<"Enter Time Period: ";
   cin>>t;
   si = (p*r*t)/100;
   return si;
}
