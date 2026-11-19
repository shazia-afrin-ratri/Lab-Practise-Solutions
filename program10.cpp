#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

class Employee : public Person {
private:
    int employeeId;
    double salary;

public:
    void setEmployeeId(int employeeId) {
        this->employeeId = employeeId;
    }

    void setSalary(double salary) {
        this->salary = salary;
    }

    int getEmployeeId() {
        return employeeId;
    }

    double getSalary() {
        return salary;
    }

    void displayDetails() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Employee ID: " << getEmployeeId() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};

int main() {
    Employee emp;
    emp.setName("Anas Ibn Belal");
    emp.setAge(25);
    emp.setEmployeeId(202);
    emp.setSalary(42000.0);

    emp.displayDetails();

    return 0;
}
