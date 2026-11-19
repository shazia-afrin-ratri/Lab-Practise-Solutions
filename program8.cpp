#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string vehicleType;

public:
    void setVehicleType(string vehicleType) {
        this->vehicleType = vehicleType;
    }

    void displayVehicleInfo() {
        cout << "Vehicle Type: " << vehicleType << endl;
    }
};

class Car : public Vehicle {
private:
    string brand;
    int doors;

public:
    void setCarInfo(string brand, int doors) {
        setVehicleType("Car");
        this->brand = brand;
        this->doors = doors;
    }

    void carInfo() {
        cout << "Car Brand: " << brand << ", Number of Doors: " << doors << endl;
    }
};

class Bus : public Vehicle {
private:
    string routeNumber;
    int passengerCapacity;

public:
    void setBusInfo(string routeNumber, int passengerCapacity) {
        setVehicleType("Bus");
        this->routeNumber = routeNumber;
        this->passengerCapacity = passengerCapacity;
    }

    void busInfo() {
        cout << "Bus Route: " << routeNumber << ", Passenger Capacity: " << passengerCapacity << endl;
    }
};

int main() {
    Car c;
    c.setCarInfo("Toyota", 4);
    c.displayVehicleInfo();
    c.carInfo();

    cout << endl;

    Bus b;
    b.setBusInfo("Route-12", 45);
    b.displayVehicleInfo();
    b.busInfo();

    return 0;
}
