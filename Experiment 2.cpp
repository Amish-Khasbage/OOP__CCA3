// Experiment 2(a): Array of Objects (City Class)

#include <iostream>
#include <string>
using namespace std;

class City {
public:
    string name;
    long population;

    void accept() {
        cout << "Enter city name: ";
        getline(cin, name);
        cout << "Enter population: ";
        cin >> population;
        cin.ignore();
    }
};

int main() {
    City cities[5];
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for city " << i + 1 << ":\n";
        cities[i].accept();
    }

    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (cities[i].population > cities[maxIndex].population)
            maxIndex = i;
    }

    cout << "\nCity with highest population: " << cities[maxIndex].name << endl;
    return 0;
}

// Experiment 2(b): Account Class (Array of Objects)

#include <iostream>
using namespace std;

class Account {
public:
    int acc_no;
    float balance;

    void accept() {
        cout << "Enter Account Number: ";
        cin >> acc_no;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void display() {
        cout << "Account No: " << acc_no << " | Balance: " << balance << endl;
    }

    void addInterest() {
        if (balance >= 5000)
            balance += balance * 0.10;
    }
};

int main2() {
    Account acc[10];
    for (int i = 0; i < 10; i++) {
        cout << "\nEnter details for account " << i + 1 << ":\n";
        acc[i].accept();
    }

    cout << "\nAccounts after adding 10% interest where applicable:\n";
    for (int i = 0; i < 10; i++) {
        acc[i].addInterest();
        acc[i].display();
    }

    return 0;
}

// Experiment 2(c): Staff Class (Array of Objects)

#include <iostream>
#include <string>
using namespace std;

class Staff {
public:
    string name, post;

    void accept() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Post: ";
        getline(cin, post);
    }

    void display() {
        cout << name << " - " << post << endl;
    }
};

int main3() {
    Staff staff[5];
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for staff " << i + 1 << ":\n";
        staff[i].accept();
    }

    cout << "\nStaff who are HODs:\n";
    for (int i = 0; i < 5; i++) {
        if (staff[i].post == "HOD" || staff[i].post == "hod" || staff[i].post == "Hod")
            staff[i].display();
    }

    return 0;
}
