#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int yearPublished;
    float price;

public:
    // Constructor
    Book(string t, string a, int y, float p) {
        title = t;
        author = a;
        yearPublished = y;
        price = p;
    }

  
    void displayDetails() const {
        cout << "Title          : " << title << endl;
        cout << "Author         : " << author << endl;
        cout << "Year Published : " << yearPublished << endl;
        cout << "Price          : " << price << endl;
    }

};

int main() {
    
    Book book1("1984", "George Orwell", 1949, 299.99f);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960, 399.50f);

    
    cout << "Book 1 details:\n";
    book1.displayDetails();
    cout << "\nBook 2 details:\n";
    book2.displayDetails();

    return 0;
}
