#include <iostream>
#include <complex>
using namespace std;
int main()
{
//declaring the complex number variables and assigning values
complex<double> complex_two(2.2);
complex<double> complex_three(3.6, 1.14);
//adding complex numbers
complex<double> complex_four =complex_two * complex_three;
//displaying output
cout <<"The answer for multiplying " << complex_two<< " x " <<complex_three<< " = "<< complex_four<<endl;
    return 0;
}
