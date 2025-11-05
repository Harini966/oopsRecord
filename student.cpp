 #include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student s;

    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nDisplaying Information:\n";
    cout << "Name: " << s.name << "\n";
    cout << "Roll: " << s.roll << "\n";
    cout << "Marks: " << s.marks << "\n";

    return 0;
}
