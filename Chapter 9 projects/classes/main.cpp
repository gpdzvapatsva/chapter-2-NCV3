#include <iostream>

using namespace std;
class Vehicle{
public:
    string model="FORD RANGER";
    int age=2;
    int speed=160;
    void setSpeed(){
    cout<<"The car travels fast"<<"";}
};
int main()
{
    Vehicle kumene;

    cout <<kumene.model<< endl;
    return 0;
}
