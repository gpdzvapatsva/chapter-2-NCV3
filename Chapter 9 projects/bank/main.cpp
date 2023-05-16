#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Car {
private:
    string make;
    string model;
    int year;
    double fuel_efficiency;

public:
    Car(string _make, string _model, int _year, double _fuel_efficiency) {
        make = _make;
        model = _model;
        year = _year;
        fuel_efficiency = _fuel_efficiency;
    }

    double calculate_max_distance() {
        double max_distance = 100.0 * (fuel_efficiency);
        return max_distance;
    }
};

int main() {
    const int num_cars = 3;
    Car cars[num_cars] = {
        Car("Toyota", "Corolla", 2021, 9.0),
        Car("Honda", "Civic", 2022, 8.0),
        Car("Ford", "Mustang", 2023, 6.0)
    };

    for (int i = 0; i < num_cars; i++) {
        cout << "Car " << i+1 << ": " << cars[i].calculate_max_distance() << " kilometres" << endl;
    }

    return 0;
}
