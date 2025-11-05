 #include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "\nAddition: " << add(x, y);
    cout << "\nMultiplication: " << multiply(x, y) << endl;

    return 0;
}
