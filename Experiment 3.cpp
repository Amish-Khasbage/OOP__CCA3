// Experiment 3(a): Pointer to Object (Book Class)

#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    float price;

    void accept() {
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Price: ";
        cin >> price;
        cin.ignore();
    }

    void display() {
        cout << "\nBook Title: " << title << "\nAuthor: " << author << "\nPrice: " << price << endl;
    }
};

int main() {
    Book b;
    Book* ptr = &b;

    cout << "Enter book details:\n";
    ptr->accept();

    cout << "\nDisplaying book details using pointer:\n";
    ptr->display();

    return 0;
}

// Experiment 3(b): Using 'this' Pointer (Student Class)

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int roll_no;
    float percentage;

    void accept() {
        cout << "Enter Roll Number: ";
        cin >> this->roll_no;
        cout << "Enter Percentage: ";
        cin >> this->percentage;
    }

    void display() {
        cout << "\nRoll Number: " << this->roll_no;
        cout << "\nPercentage: " << this->percentage << endl;
    }
};

int main2() {
    Student s;
    s.accept();
    s.display();
    return 0;
}

// Experiment 3(c): Nested Class

#include <iostream>
#include <string>
using namespace std;

class Outer {
public:
    class Inner {
    public:
        void show() {
            cout << "Hello from Inner Class!" << endl;
        }
    };

    void display() {
        cout << "This is the Outer Class." << endl;
        Inner obj;
        obj.show();
    }
};

int main3() {
    Outer outerObj;
    outerObj.display();
    return 0;
}
