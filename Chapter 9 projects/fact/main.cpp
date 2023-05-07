#include <iostream>
using namespace std;
//function prototype
int fibonacci();
int main()
{
fibonacci();
return 0;
}


int fibonacci() {
    int n, first_value = 0, second_value = 1, next_fib = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << first_value << ", ";
            continue;
        }
        if(i == 2) {
            cout << second_value << ", ";
            continue;
        }
        next_fib = first_value + second_value;
     first_value= second_value;
       second_value = next_fib;

        cout << next_fib << ", ";
    }
    return 0;
}

