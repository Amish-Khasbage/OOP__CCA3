// Experiment 5(a): Constructor - Sum of Numbers from 1 to n

#include <iostream>
using namespace std;

class Sum {
    int n, total;
public:
    Sum(int num) {
        n = num;
        total = 0;
        for (int i = 1; i <= n; i++)
            total += i;
    }
    void display() {
        cout << "Sum of numbers from 1 to " << n << " = " << total << endl;
    }
};

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    Sum s(n);
    s.display();
    return 0;
}

// Experiment 5(b): Constructor to Initialize Data Members

#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    float percentage;
public:
    Student(string n, float p) {
        name = n;
        percentage = p;
    }
    void display() {
        cout << "Name: " << name << "\nPercentage: " << percentage << endl;
    }
};

int main2() {
    string n;
    float p;
    cout << "Enter name: ";
    getline(cin, n);
    cout << "Enter percentage: ";
    cin >> p;
    Student s(n, p);
    s.display();
    return 0;
}

// Experiment 5(c): Constructor with Default Argument

#include <iostream>
#include <string>
using namespace std;

class College {
    int roll_no;
    string name;
    string course;
public:
    College(int r, string n, string c = "Computer Engineering") {
        roll_no = r;
        name = n;
        course = c;
    }
    void display() {
        cout << "Roll No: " << roll_no << "\nName: " << name << "\nCourse: " << course << endl;
    }
};

int main3() {
    College c1(101, "Aarav");
    College c2(102, "Riya", "Mechanical Engineering");

    cout << "\nStudent 1:\n";
    c1.display();
    cout << "\nStudent 2:\n";
    c2.display();

    return 0;
}

// Experiment 5(d): Constructor Overloading

#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l) {
        length = breadth = l;
    }
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    void display() {
        cout << "Area = " << length * breadth << endl;
    }
};

int main4() {
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4, 6);

    cout << "Default Rectangle: ";
    r1.display();

    cout << "Square: ";
    r2.display();

    cout << "Rectangle: ";
    r3.display();

    return 0;
}
