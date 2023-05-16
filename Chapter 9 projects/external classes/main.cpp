#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "Hello, World!";

    // Extract a substring starting from index 7 with a length of 5
    string substring = str.substr(7, 5);
cout << "Substring: " << str.at(2) << endl;
    cout << "Original string: " << str <<endl;
    cout << "Substring: " << substring << endl;

    return 0;
}
