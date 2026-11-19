#include <iostream>
using namespace std;

class LandVehicle {
public:
    void landInfo() {
        cout << "Land Vehicle: Can drive on roads and land surfaces." << endl;
    }
};

class WaterVehicle {
public:
    void waterInfo() {
        cout << "Water Vehicle: Can float and navigate on water." << endl;
    }
};

class AmphibiousVehicle : public LandVehicle, public WaterVehicle {
public:
    void displayVehicleType() {
        cout << "Vehicle Type: Amphibious Vehicle (Operates on both land and water)." << endl;
    }
};

int main() {
    AmphibiousVehicle av;
    av.displayVehicleType();
    av.landInfo();
    av.waterInfo();

    return 0;
}
