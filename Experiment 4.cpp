// Experiment 4(a): Passing Object as Function Argument (Result Average)

#include <iostream>
using namespace std;

class Result1 {
public:
    float marks;
    void accept() {
        cout << "Enter marks for Result1: ";
        cin >> marks;
    }
};

class Result2 {
public:
    float marks;
    void accept() {
        cout << "Enter marks for Result2: ";
        cin >> marks;
    }

    void average(Result1 r1) {
        cout << "Average Marks = " << (r1.marks + marks) / 2 << endl;
    }
};

int main() {
    Result1 r1;
    Result2 r2;
    r1.accept();
    r2.accept();
    r2.average(r1);
    return 0;
}

// Experiment 4(b): Greatest Number using Friend Function

#include <iostream>
using namespace std;

class A {
    int num1;
public:
    void accept() {
        cout << "Enter number from class A: ";
        cin >> num1;
    }
    friend void greatest(A, class B);
};

class B {
    int num2;
public:
    void accept() {
        cout << "Enter number from class B: ";
        cin >> num2;
    }
    friend void greatest(A, B);
};

void greatest(A a, B b) {
    if (a.num1 > b.num2)
        cout << "Greatest Number: " << a.num1 << endl;
    else
        cout << "Greatest Number: " << b.num2 << endl;
}

int main2() {
    A objA;
    B objB;
    objA.accept();
    objB.accept();
    greatest(objA, objB);
    return 0;
}

// Experiment 4(c): Swapping using Friend Function

#include <iostream>
using namespace std;

class Number {
    int value;
public:
    void accept() {
        cout << "Enter number: ";
        cin >> value;
    }
    void display() {
        cout << value << endl;
    }
    friend void swapValues(Number&, Number&);
};

void swapValues(Number& n1, Number& n2) {
    int temp = n1.value;
    n1.value = n2.value;
    n2.value = temp;
}

int main3() {
    Number n1, n2;
    cout << "Enter first number:\n";
    n1.accept();
    cout << "Enter second number:\n";
    n2.accept();

    cout << "\nBefore Swapping:\n";
    n1.display();
    n2.display();

    swapValues(n1, n2);

    cout << "\nAfter Swapping:\n";
    n1.display();
    n2.display();

    return 0;
}
