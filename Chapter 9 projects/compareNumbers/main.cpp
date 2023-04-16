#include <iostream>
using namespace std;
//function prototype
void nonPara();
void secondFunction(){
cout << "This is the second function" << '\n';
}
int main()
{
    nonPara(); // function nonParai() is called, no value is returned
    return 0;
}
// void means the function does not return a value to the caller
void nonPara()
{
    cout << "This is a non parameter function" << '\n';
    // This function does not return a value so no return statement is needed
    return secondFunction();
}

