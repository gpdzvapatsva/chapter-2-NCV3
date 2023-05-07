#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;
char my_characters[7]= { 'P', 'r', 'o', 'g', 'r', 'a', 'm'};

int main()
{
    my_characters[3]='T';
    cout<<".The elements in the array are :" ;
  for (char x: my_characters){
    cout<<x<< " ";
  }
    return 0;
}
