
// illustrating uniform real distribution method
#include <bits/cstdc++.h>
using namespace std;
int main()
{
    // random generator
    default_random_engine gen;
    uniform_real_distribution<float> distribution(3.3,
                                                  7.7);
    for (int i = 0; i < 5; i++) {
        cout << distribution(gen) << '\n';
    }
    return 0;
}

