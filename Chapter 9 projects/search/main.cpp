#include <iostream>
#include <string>

using namespace std;

int main() {
    string mainstring = "we are who we are";
    string sub = "we";

    int pos = mainstring.find(sub);
    // find the first occurrence of sub
    while (pos != string::npos) { // loop until sub is not found
        cout << pos << endl; // print the index of sub
        pos = mainstring.find(sub, pos + 1); // find the next occurrence of sub
    }

    return 0;
}
