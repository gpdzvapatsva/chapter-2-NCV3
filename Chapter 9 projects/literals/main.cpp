#include <iostream>
using namespace std;
class Vehicle{
public:
    //member variables
    string _model;
    string _make;
    double _price;
    string _colour;
    int _year_model;
    private:
        int _engineCapacity;
//initialising the engine capacity variable using a parameterised constructor
public:
    Cars(int engine){
            _engineCapacity=engine;
        }
public:
    //member function
void setSpeed(){
const int MAX_SPEED=120;
cout<<"The set maximum speed for highways is " << MAX_SPEED <<"km/hr"<<endl;

    }
};
//declaration of sub-classes /derived classes
class Cars: public Vehicle{
 private:
        int _drive_capacity;
};
class Buses: public Vehicle{
 private:
        int _num_of_passengers;
        public:
    Buses(int passengers){
            _num_of_passengers=passengers;
            cout<<"The number of passenger which the bus carries is: " <<_num_of_passengers<<endl;
        }
        };
int main()
{
    //instatiating object class
Cars myToyota;
Buses myVolvo(75);
myVolvo._colour="red";
cout<<"The colour of my bus is " <<myVolvo._colour<<endl;
myVolvo.setSpeed();
}
