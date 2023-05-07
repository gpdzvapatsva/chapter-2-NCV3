#include <iostream>
using namespace std;
//creating a class
class Rectangle{
//access specifier
public:
    //member variables
    int length;
   int width;
   // constructor
public:
  Rectangle(){
    length=5;
    width=3;
    cout << "Length is = " << length << endl;
    cout << "Width is = " << width << endl;
    }
    };
int main()
{

// instantiating an object
Rectangle objBook;

return 0;
}


