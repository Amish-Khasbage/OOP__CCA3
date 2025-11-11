// Experiment 8(a): Overload the + operator to concatenate two strings

#include <iostream>
#include <string>
using namespace std;

class Concatenate {
    string str;
public:
    Concatenate(string s = "") { str = s; }

    Concatenate operator+(Concatenate &obj) {
        return Concatenate(str + obj.str);
    }

    void display() {
        cout << "Concatenated String: " << str << endl;
    }
};

int main() {
    Concatenate s1("xyz"), s2("pq"), s3;
    s3 = s1 + s2;
    s3.display();
    return 0;
}



// Experiment 8(b): Virtual Function with Base Class ILogin

#include <iostream>
#include <string>
using namespace std;

class ILogin {
protected:
    string name;
    string password;
public:
    virtual void accept() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Password: ";
        getline(cin, password);
    }

    virtual void display() {
        cout << "Name: " << name << "\nPassword: " << password << endl;
    }
};

class EmailLogin : public ILogin {
public:
    void accept() override {
        cout << "\n=== Email Login ===" << endl;
        ILogin::accept();
    }
    void display() override {
        cout << "\nEmail Login Details:\nName: " << name << "\nPassword: " << password << endl;
    }
};

class MembershipLogin : public ILogin {
public:
    void accept() override {
        cout << "\n=== Membership Login ===" << endl;
        ILogin::accept();
    }
    void display() override {
        cout << "\nMembership Login Details:\nName: " << name << "\nPassword: " << password << endl;
    }
};

int main() {
    EmailLogin e;
    MembershipLogin m;
    e.accept();
    m.accept();
    e.display();
    m.display();
    return 0;
}
