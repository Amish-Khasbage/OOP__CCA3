// Experiment 6: Inheritance

#include <iostream>
#include <string>
using namespace std;

// (a) Multilevel Inheritance
class Person {
public:
    string name;
    void getName() {
        cout << "Enter name: ";
        getline(cin, name);
    }
};
class Student : public Person {
public:
    int roll;
    void getRoll() {
        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore();
    }
};
class Marks : public Student {
public:
    float score;
    void getMarks() {
        cout << "Enter marks: ";
        cin >> score;
    }
    void display() {
        cout << "\nName: " << name << "\nRoll: " << roll << "\nMarks: " << score << endl;
    }
};
int main() {
    Marks m;
    m.getName();
    m.getRoll();
    m.getMarks();
    m.display();
    return 0;
}

// (b) Multiple Inheritance
#include <iostream>
#include <string>
using namespace std;

class A {
public:
    int x;
    void getX() { cout << "Enter X: "; cin >> x; }
};
class B {
public:
    int y;
    void getY() { cout << "Enter Y: "; cin >> y; }
};
class C : public A, public B {
public:
    void sum() { cout << "Sum = " << x + y << endl; }
};
int main2() {
    C obj;
    obj.getX();
    obj.getY();
    obj.sum();
    return 0;
}

// (c) Hierarchical Inheritance
#include <iostream>
using namespace std;

class Shape {
public:
    void msg() { cout << "This is a shape.\n"; }
};
class Circle : public Shape {
public:
    void show() { cout << "Drawing a circle.\n"; }
};
class Square : public Shape {
public:
    void show() { cout << "Drawing a square.\n"; }
};
int main3() {
    Circle c;
    Square s;
    c.msg(); c.show();
    s.msg(); s.show();
    return 0;
}

// (d) Hybrid Inheritance
#include <iostream>
using namespace std;

class A1 { public: void showA() { cout << "Class A\n"; } };
class B1 : public A1 { public: void showB() { cout << "Class B\n"; } };
class C1 { public: void showC() { cout << "Class C\n"; } };
class D1 : public B1, public C1 { public: void showD() { cout << "Class D (Hybrid)\n"; } };

int main4() {
    D1 d;
    d.showA();
    d.showB();
    d.showC();
    d.showD();
    return 0;
}

// (e) Virtual Base Class
#include <iostream>
using namespace std;

class Base {
public:
    int x;
    void input() { cout << "Enter value of x: "; cin >> x; }
};
class Derived1 : virtual public Base {};
class Derived2 : virtual public Base {};
class Final : public Derived1, public Derived2 {
public:
    void show() { cout << "Value of x (from virtual base) = " << x << endl; }
};

int main5() {
    Final obj;
    obj.input();
    obj.show();
    return 0;
}
