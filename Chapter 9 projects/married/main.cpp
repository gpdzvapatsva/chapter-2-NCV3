#include <iostream>
using namespace std;

int main() {
   int i = 1;
   do {
      if (i == 4) {
         break;
      }
      cout << i << "\n";
   } while (++i <= 10);
   return 0;
}
