#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string category;

public:
    void setCategory(string category) {
        this->category = category;
    }

    void vehicleInfo() {
        cout << "Vehicle Category: " << category << endl;
    }
};

class Fare {
protected:
    double fareAmount;

public:
    void setFareAmount(double fareAmount) {
        this->fareAmount = fareAmount;
    }

    void fareInfo() {
        cout << "Transportation Fare: " << fareAmount << " BDT" << endl;
    }
};

class Car : public Vehicle {
private:
    string model;

public:
    void setCarDetails(string model) {
        setCategory("Private Car");
        this->model = model;
    }

    void carInfo() {
        cout << "Car Model: " << model << endl;
    }
};

class Bus : public Vehicle, public Fare {
private:
    string busName;

public:
    void setBusDetails(string busName, double fareAmount) {
        setCategory("Public Bus");
        setFareAmount(fareAmount);
        this->busName = busName;
    }

    void busInfo() {
        cout << "Bus Name: " << busName << endl;
    }
};

int main() {
    Car myCar;
    myCar.setCarDetails("Honda Civic");
    myCar.vehicleInfo();
    myCar.carInfo();

    cout << endl;

    Bus myBus;
    myBus.setBusDetails("Mirpur Express", 35.0);
    myBus.vehicleInfo();
    myBus.fareInfo();
    myBus.busInfo();

    return 0;
}
