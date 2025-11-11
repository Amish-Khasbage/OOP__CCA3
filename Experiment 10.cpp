// Experiment 10(a): Function Template to Find Sum of Array Elements

#include <iostream>
using namespace std;

template <typename T>
T findSum(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    float arr2[10] = {1.1,2.2,3.3,4.4,5.5,1.1,2.2,3.3,4.4,5.5};
    double arr3[10] = {1.11,2.22,3.33,4.44,5.55,6.66,7.77,8.88,9.99,10.10};

    cout << "Sum (int): " << findSum(arr1, 10) << endl;
    cout << "Sum (float): " << findSum(arr2, 10) << endl;
    cout << "Sum (double): " << findSum(arr3, 10) << endl;

    return 0;
}



// Experiment 10(b): Square Function using Template Specialization

#include <iostream>
#include <string>
using namespace std;

template <typename T>
T square(T x) {
    return x * x;
}

// Specialized for string
template <>
string square<string>(string s) {
    return s + s;
}

int main() {
    int a = 5;
    string str = "Hello";
    cout << "Square of int: " << square(a) << endl;
    cout << "Square of string: " << square(str) << endl;
    return 0;
}



// Experiment 10(c): Class Template for Simple Calculator

#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    void operations() {
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;
        cout << "Division: " << a / b << endl;
    }
};

int main() {
    Calculator<int> c1(10, 5);
    cout << "Integer Calculator:" << endl;
    c1.operations();

    Calculator<float> c2(10.5, 2.5);
    cout << "\nFloat Calculator:" << endl;
    c2.operations();

    return 0;
}



// Experiment 10(d): Stack Implementation using Class Template

#include <iostream>
using namespace std;

template <class T>
class Stack {
    T arr[10];
    int top;
public:
    Stack() { top = -1; }

    void push(T x) {
        if (top == 9)
            cout << "Stack Overflow!" << endl;
        else
            arr[++top] = x;
    }

    void pop() {
        if (top == -1)
            cout << "Stack Underflow!" << endl;
        else
            cout << "Popped: " << arr[top--] << endl;
    }

    void display() {
        if (top == -1)
            cout << "Stack is empty!" << endl;
        else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    return 0;
}
