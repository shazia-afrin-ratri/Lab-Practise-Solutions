#include <iostream>
using namespace std;

class Shape {
protected:
    double dimension;

public:
    virtual ~Shape() {}
    virtual double calculateArea() = 0;
};

class Square : public Shape {
public:
    void setDimension(double dimension) {
        this->dimension = dimension;
    }

    double calculateArea() override {
        return dimension * dimension;
    }
};

class Circle : public Shape {
public:
    void setDimension(double dimension) {
        this->dimension = dimension;
    }

    double calculateArea() override {
        const double PI = 3.141592653589793;
        return PI * dimension * dimension;
    }
};

int main() {
    Square sq;
    Circle cr;

    double side, radius;
    cout << "Enter side of Square: ";
    cin >> side;
    sq.setDimension(side);

    cout << "Enter radius of Circle: ";
    cin >> radius;
    cr.setDimension(radius);

    cout << "Area of Square: " << sq.calculateArea() << endl;
    cout << "Area of Circle: " << cr.calculateArea() << endl;

    return 0;
}
