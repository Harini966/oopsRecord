#include <iostream>
#include <string>
using namespace std;

class StringConcat {
private:
    string str;

public:
    StringConcat() {
        str = "";
    }

    StringConcat(string s) {
        str = s;
    }

    void display() {
        cout << str << endl;
    }

    StringConcat operator+(const StringConcat& s) {
        StringConcat temp;
        temp.str = str + s.str;
        return temp;
    }
};

int main() {
    StringConcat s1("Hello, ");
    StringConcat s2("World!");
    StringConcat s3;

    cout << "First string: ";
    s1.display();
    cout << "Second string: ";
    s2.display();

    s3 = s1 + s2;

    cout << "After concatenation using '+' operator: ";
    s3.display();

    return 0;
}
