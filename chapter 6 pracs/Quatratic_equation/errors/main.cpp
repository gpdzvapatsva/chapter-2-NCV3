#include <iostream>
#include <cmath>
using namespace std;

    int main()
    {
    	float side1, side2, side3, area, s;
		cout << "\n\n Find the area of any triangle using Heron's Formula :\n";
		cout << "----------------------------------------------------------\n";
        cout<<" Input the length of 1st side  of the triangle : "<<endl;
    	cin>>side1;
        cout<<" Input the length of 2nd side  of the triangle : "<<endl;
    	cin>>side2;
        cout<<" Input the length of 3rd side  of the triangle : "<<endl;
    	cin>>side3;
    	//Input validation
        if(!cin || cin.fail())
    {
    cout << "Invalid Please make sure all enntries are in correct format"<<endl;;
    }
    else
    {
    cout << "valid";
    s = (side1+side2+side3)/2;
    area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    if (isnan(area)){
        cout<<" The sides of the triangle are not valid : "<< endl;
    }
    else{
    cout<<" The area of the triangle is : "<< area <<"cm^2"<< endl;
    cout << endl;
    return 0;
    }
}

    }
