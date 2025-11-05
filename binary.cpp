#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number() {
        value = 0;
    }

    Number(int v) {
        value = v;
    }

    void display() {
        cout << "Value: " << value << endl;
    }

    Number operator+(const Number& n) {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }
};

int main() {
    Number n1(10), n2(20), n3;

    cout << "First number: ";
    n1.display();
    cout << "Second number: ";
    n2.display();

    n3 = n1 + n2;

    cout << "After adding using binary '+' operator: ";
    n3.display();

    return 0;
}
