#include <iostream>
using namespace std;

class student
{
private:
    int rollno;       // Fixed: variable name (no space)
    string name;

public:
    // Default constructor
    student()
    {
        rollno = 1;    // Fixed: added semicolon
        name = "harini";
    }

    // Parameterized constructor
    student(int r, string n)
    {
        rollno = r;    // Fixed: variable name (no space)
        name = n;
    }

    // Copy constructor
    student(const student &S)
    {
        rollno = S.rollno;   // Fixed: used correct variable and parameter
        name = S.name;
    }

    // Display method
    void display()
    {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    student s1;                    // Default constructor
    student s2(205, "harika");     // Parameterized constructor
    student s3 = s2;               // Copy constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
