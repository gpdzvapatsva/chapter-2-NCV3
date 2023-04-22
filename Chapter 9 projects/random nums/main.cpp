#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

       int num;
        cout<<" The random number are: ";
       for (int i=0; i<=10; i++){
       num = rand() % 100 + 1;
    cout<< num << " ";
       }
    return 0;
}
