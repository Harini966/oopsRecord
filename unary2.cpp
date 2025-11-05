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

    Number operator++() {
        ++value;
        return *this;
    }

    Number operator--() {
        --value;
        return *this;
    }
};

int main() {
    Number n1(10);
    Number n2, n3;

    cout << "Original number:\n";
    n1.display();

    n2 = ++n1;
    cout << "After applying unary increment:\n";
    n2.display();

    n3 = --n1;
    cout << "After applying unary decrement:\n";
    n3.display();

    return 0;
}
