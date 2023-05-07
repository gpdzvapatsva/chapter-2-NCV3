#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    cout<<"Random numbers generated between 5 and 10:"<<endl;
    srand(time( NULL ) );
    for (int i = 1; i <= 10; i++)
    {
        cout <<setw(5)<<6 +rand()% (10-6) << " ";
        if (i%5==0)
            cout<<"\n";
    }

}
