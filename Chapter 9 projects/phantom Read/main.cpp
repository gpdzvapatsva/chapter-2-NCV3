#include <iostream>
#include <string>
using namespace std;

int main() {
  string mainstring = "we are who we are";
  string searchstring="we";

 int found = mainstring.find(searchstring);
while (found != string::npos)
{


     int found = mainstring.find(searchstring);

    cout << "String found at position " << found <<endl;
    found++;
    }
  return 0;
}
