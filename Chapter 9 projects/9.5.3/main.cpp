#include <iostream>
using namespace std;

int main() {
    // Example of nesting three different types of loops
    for (int i = 1; i <= 3; i++) {
        cout << "Outer Loop: " << i << endl;

        for (int j = 1; j <= 2; j++) {
            cout << "\tMiddle Loop: " << j << endl;

            for (int k = 1; k <= 4; k++) {
                cout << "\t\tInner Loop: " << k << endl;
            }
        }
    }

    return 0;
}
