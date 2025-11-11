// Experiment 7(a): Function Overloading (Area of Lab and Classroom)

#include <iostream>
using namespace std;

float area(float length, float breadth) {
    return length * breadth;
}

float area(float side) {
    return side * side;
}

int main() {
    float l, b, s;
    cout << "Enter length and breadth of laboratory: ";
    cin >> l >> b;
    cout << "Enter side of classroom: ";
    cin >> s;

    cout << "Area of laboratory: " << area(l, b) << endl;
    cout << "Area of classroom: " << area(s) << endl;
    return 0;
}

// Experiment 7(b): Function Overloading (Sum of Values)

#include <iostream>
using namespace std;

float sum(float a, float b, float c, float d, float e) {
    return a + b + c + d + e;
}

int sum(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    return total;
}

int main2() {
    float a, b, c, d, e;
    cout << "Enter 5 float values: ";
    cin >> a >> b >> c >> d >> e;
    cout << "Sum of floats: " << sum(a, b, c, d, e) << endl;

    int arr[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) cin >> arr[i];
    cout << "Sum of integers: " << sum(arr, 10) << endl;

    return 0;
}

// Experiment 7(c): Unary Operator Overloading (-)

#include <iostream>
using namespace std;

class Number {
    int num;
public:
    void accept() { cout << "Enter number: "; cin >> num; }
    void operator-() { num = -num; }
    void display() { cout << "Value: " << num << endl; }
};

int main3() {
    Number n;
    n.accept();
    -n;
    n.display();
    return 0;
}

// Experiment 7(d): Unary Operator Overloading (++ Pre/Post)

#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter(int c = 0) { count = c; }

    Counter operator++() {
        ++count;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }

    void display() {
        cout << "Count = " << count << endl;
    }
};

int main4() {
    Counter c1(5);
    cout << "Initial: ";
    c1.display();

    ++c1;
    cout << "After pre-increment: ";
    c1.display();

    c1++;
    cout << "After post-increment: ";
    c1.display();

    return 0;
}
