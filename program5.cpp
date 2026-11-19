#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPersonInfo(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
private:
    int employeeId;
    double salary;

public:
    void setEmployeeInfo(string name, int age, int employeeId, double salary) {
        setPersonInfo(name, age);
        this->employeeId = employeeId;
        this->salary = salary;
    }

    void displayEmployeeInfo() {
        displayPersonInfo();
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setEmployeeInfo("Tahmid Hasan", 28, 501, 55000.0);
    emp.displayEmployeeInfo();

    return 0;
}
