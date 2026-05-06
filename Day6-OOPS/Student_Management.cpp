#include<iostream>
using namespace std;

class Student {
public:
    string name, email;
    int roll, reg_no;
    long long phone;
    float marks;

    // Default Constructor
    Student() {
        name = "Not Assigned";
        roll = 0;
        reg_no = 0;
        email = "N/A";
        phone = 0;
        marks = 0.0;
    }

    // Parameterized Constructor
    Student(string n, int r, int reg, string e, long long p, float m) {
        name = n;
        roll = r;
        reg_no = reg;
        email = e;
        phone = p;
        marks = m;
    }

    // Method to display details
    void show() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Reg No: " << reg_no << endl;
        cout << "Email: " << email << endl;
        cout << "Phone: " << phone << endl;
        cout << "Marks: " << marks << endl;
        cout << "----------------------" << endl;
    }
};

int main() {

    // Default constructor use
    Student s1;

    // Parameterized constructor use
    Student s2("Rahul", 101, 1001, "rahul@gmail.com", 9876543210, 85.5);
    Student s3("Aman", 102, 1002, "aman@gmail.com", 9123456780, 78.0);

    cout << "Student 1 (Default Values):" << endl;
    s1.show();

    cout << "Student 2:" << endl;
    s2.show();

    cout << "Student 3:" << endl;
    s3.show();

    return 0;
}