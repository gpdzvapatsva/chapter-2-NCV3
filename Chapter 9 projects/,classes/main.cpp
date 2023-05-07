#include <iostream>
#include <iomanip>
using namespace std;
//creating a class
class Cars{
public:
    //member function
void setSpeed();
//access specifier
public:
    //member variables
    string _model;
    string _make;
    double _price;
    string _colour;
    int _year_model;
    private:
        int
//initialising the engine capacity variable using a constructor
public:
    void initialValues(int engine){
            _engineCapacity=engine;
        }

    };
void setSpeed(){
const int MAX_SPEED=120;
cout<<"The set maximum speed for highways is " << MAX_SPEED <<"km/hr"<<endl;
cout<<"The engine capacity is  " << _engineCapacity <<" litre"<<endl;
    }

int main()
{
//instantiating an object of Cars class
Cars objBakkie; //object name is objBakkie
//setting values for the attributes/properties
objBakkie._make="Ranger";
objBakkie._price=450000;
objBakkie._year_model=2023;
objBakkie._model="FORD";
objBakkie._colour="White";



// Print attribute values
cout<<"The model of my car is : "<<objBakkie._model<<"\n";
cout << "The make of my car is : "<<objBakkie._make<< "\n";
cout<<"The value of my car is : "<<objBakkie._price<<"\n";
cout <<"My car is  : "<< objBakkie._colour << " in colour"<<"\n";
cout<<"I purchased my car in the year : "<<objBakkie._year_model<<"\n";
//calling the member function of objBakkie
objBakkie.initialValues(2); // pass the values of private variables as arguments
objBakkie.setSpeed();

return 0;
}


