#include <iostream>
using namespace std;

int main()
{
    string choir_members[] = {"Andy", "Zaid", "Andy", "Melody", "Leaon", "Amanda", "Sibu", "Sihle", "Sihle", "Adbul", "Zaid"};
    int i, j;
    int size = sizeof(choir_members)/sizeof(choir_members[0]);
    cout << "Original array: ";
    for (i = 0; i < size; i++)
    cout << choir_members[i] <<" ";
    cout  << "\nRepeating elements: ";
    for(i = 0; i < size; i++)
    for(j = i+1; j < size; j++)
      if(choir_members[i] == choir_members[j])
        cout <<  choir_members[i] << " ";

    return 0;
}
