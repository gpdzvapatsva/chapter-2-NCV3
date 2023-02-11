#include <iostream>
using namespace std;
    int main()
    {
        //declaring the variables
    	int dividend, divisor, quotient,remainder;
		cout << "\n\n Calculating quotient and remainder :\n";
		cout << "-------------------------------------\n";
		//capturing input
        cout<<" Input the dividend : ";
    	cin>>dividend;
        cout<<" Input the divisor : ";
    	cin>>divisor;
    	//processing
		quotient=dividend / divisor;
		remainder=dividend % divisor;
		//displaying the result
        cout<<" The quotient of the division is : "<< quotient << endl;
        cout<<" The remainder of the division is : "<< remainder << endl;
        cout << endl;
        return 0;
    }

