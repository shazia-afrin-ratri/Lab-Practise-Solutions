#include <iostream>
#include <string>
using namespace std;

class University {
protected:
    string universityName;

public:
    void setUniversityName(string universityName) {
        this->universityName = universityName;
    }

    void universityInfo() {
        cout << "University: " << universityName << endl;
    }
};

class Department : public University {
protected:
    string departmentName;

public:
    void setDepartmentName(string departmentName) {
        this->departmentName = departmentName;
    }

    void departmentInfo() {
        cout << "Department: " << departmentName << endl;
    }
};

class Student : public Department {
private:
    int studentId;
    string studentName;

public:
    void setStudentInfo(int studentId, string studentName) {
        this->studentId = studentId;
        this->studentName = studentName;
    }

    void studentInfo() {
        cout << "Student ID: " << studentId << endl;
        cout << "Student Name: " << studentName << endl;
    }
};

int main() {
    Student st;
    st.setUniversityName("Bangladesh University of Business and Technology");
    st.setDepartmentName("Computer Science & Engineering");
    st.setStudentInfo(5801, "Shazia Afrin");

    st.universityInfo();
    st.departmentInfo();
    st.studentInfo();

    return 0;
}
