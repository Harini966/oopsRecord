#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    void inputInfo() {
        cout << "Enter student name: "; 
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
       
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

  
    void displayInfo() const {
        cout << "Name         : " << name << "\n";
        cout << "Roll Number  : " << rollNumber << "\n";
        cout << "Marks        : " << marks << "\n";
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (n <= 0) {
        cout << "Invalid number of students.\n";
        return 1;
    }

    Student *students = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEntering details for student " << (i + 1) << ":\n";
        students[i].inputInfo();
    }

    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << (i + 1) << ":\n";
        students[i].displayInfo();
    }

    delete[] students;

    return 0;
}
