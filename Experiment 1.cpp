// Experiment 1(a): Class and Object

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int roll_no;
    string name;

    void accept() {
        cout << "Enter Roll Number: ";
        cin >> roll_no;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void display() {
        cout << "\nRoll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.accept();
    s1.display();
    return 0;
}

// Experiment 1(b): Book Class

#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string book_name;
    float price;
    int pages;

    void accept() {
        cout << "Enter Book Name: ";
        getline(cin, book_name);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Number of Pages: ";
        cin >> pages;
        cin.ignore();
    }
};

int main() {
    Book b1, b2;
    cout << "Enter details for first book:" << endl;
    b1.accept();
    cout << "Enter details for second book:" << endl;
    b2.accept();

    if (b1.price > b2.price)
        cout << "\nBook with greater price is: " << b1.book_name;
    else
        cout << "\nBook with greater price is: " << b2.book_name;

    return 0;
}

// Experiment 1(c): Time Class

#include <iostream>
using namespace std;

class Time {
public:
    int h, m, s;

    void accept() {
        cout << "Enter time (HH MM SS): ";
        cin >> h >> m >> s;
    }

    void displaySeconds() {
        int total = h * 3600 + m * 60 + s;
        cout << "\nTotal Seconds: " << total;
    }
};

int main() {
    Time t1;
    t1.accept();
    t1.displaySeconds();
    return 0;
}

