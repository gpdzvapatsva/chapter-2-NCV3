#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "signed double " << std::numeric_limits<long double>::min() << endl;
    std::cout << "signed double" << std::numeric_limits<long double>::max() << endl;
    return 0;
}
