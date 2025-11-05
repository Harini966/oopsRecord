#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name, designation;
    int empID;
    float basic, hra, da, pf, gross, net;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Designation: ";
        getline(cin, designation);
        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    void calculate() {
        hra = 0.20 * basic;   
        da = 0.10 * basic;    
        pf = 0.08 *basic
        gross = basic + hra + da;
        net = gross - pf;
    }

    void display() {
        cout << "\n----------- SALARY SLIP -----------";
        cout << "\nEmployee ID      : " << empID;
        cout << "\nEmployee Name    : " << name;
        cout << "\nDesignation      : " << designation;
        cout << "\n-----------------------------------";
        cout << "\nBasic Salary     : " << basic;
        cout << "\nHRA (20%)        : " << hra;
        cout << "\nDA (10%)         : " << da;
        cout << "\nPF (8%)          : " << pf;
        cout << "\n-----------------------------------";
        cout << "\nGross Salary     : " << gross;
        cout << "\nNet Salary       : " << net;
        cout << "\n-----------------------------------\n";
    }
};

int main() {
    Employee e;
    e.input();
    e.calculate();
    e.display();
    return 0;
}
