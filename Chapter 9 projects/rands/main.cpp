#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;
int main()
{
     float num;
      srand(time(0));
      for (int i=1; i<=10; i++){
       num = rand() / static_cast<float>(RAND_MAX);
    cout<< setw(10)<<num << " ";
    if (i%5==0)
        cout<<endl;
       }
}




