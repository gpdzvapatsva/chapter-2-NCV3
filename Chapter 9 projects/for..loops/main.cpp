#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int fizz = 3;
    int buzz = 5;
    int end_value = 20;
    int fizzBuzz = fizz * buzz;
    int counter1=0, counter2=0, counter3=0;

    // ^ numbers divisible by 3 and 5 are also divisible by 3 * 5

    // start the loop, continue until the counter (start_value) reaches the 'end_value
    for (int start_value = 1; start_value <= end_value; ++start_value)
    {
        if (start_value % fizzBuzz == 0) // divisible by 3 and 5
        {
            cout<<"FIZZ BUZZ!!\n";
            counter3=counter3+1;
            counter2=counter2+1;
            counter1=counter1+1;

        }
        else if (start_value % fizz == 0) // divisible by 3
        {
            cout<<"FIZZ\n";
            counter1=counter1+1;

        }
        else if (start_value % buzz == 0)// divisible by 5
        {
            cout<<"BUZZ\n";
            counter2=counter2 +1;

        }
        else // not divisible by 3 or 5
        {
            cout<<start_value<<endl;
        }
    }
    //displaying the occurences of each word
     cout<<"The number of occurences of the word FIZZ is "<<counter1<<endl;
      cout<<"The number of occurences of the word BUZZ is "<<counter2<<endl;
       cout<<"The number of occurences of the word FIZZBUZZ is "<<counter3<<endl;
    return 0;
}
