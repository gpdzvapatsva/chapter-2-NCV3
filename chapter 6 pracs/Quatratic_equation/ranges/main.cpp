#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int radius=0;
double volume=0;
const double PI=3.142;
cout << "Please enter the radius of the sphere:" << endl;
cin >> radius;
if(cin.fail())
{
cout << "This is not a valid radius" << endl;
cin.clear();
cin.ignore(1000, '\n');

}
else{
volume= (4 *PI*pow(radius, 3))/3;;
cout<<"The volume of a sphere whose radius is " <<volume <<"cm^3"<<endl;
}

    return 0;
}
