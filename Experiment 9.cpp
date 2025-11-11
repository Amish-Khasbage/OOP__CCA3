// Experiment 9(a): Copy contents from "First.txt" to "Second.txt"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("First.txt", ios::in);
    ofstream fout("Second.txt", ios::out);
    string line;

    if (!fin) {
        cout << "First.txt not found!" << endl;
        return 0;
    }

    while (getline(fin, line)) {
        fout << line << endl;
    }

    cout << "File copied successfully!" << endl;
    fin.close();
    fout.close();
    return 0;
}



// Experiment 9(b): Count digits and spaces using file handling

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("First.txt", ios::in);
    if (!fin) {
        cout << "File not found!" << endl;
        return 0;
    }

    char ch;
    int digits = 0, spaces = 0;
    while (fin.get(ch)) {
        if (isdigit(ch)) digits++;
        if (isspace(ch)) spaces++;
    }
    fin.close();

    cout << "Digits: " << digits << "\nSpaces: " << spaces << endl;
    return 0;
}



// Experiment 9(c): Count words using file handling

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("First.txt");
    if (!fin) {
        cout << "File not found!" << endl;
        return 0;
    }

    string word;
    int count = 0;
    while (fin >> word)
        count++;

    cout << "Total Words: " << count << endl;
    fin.close();
    return 0;
}



// Experiment 9(d): Count occurrences of a given word

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("First.txt");
    if (!fin) {
        cout << "File not found!" << endl;
        return 0;
    }

    string word, target;
    int count = 0;
    cout << "Enter the word to count: ";
    cin >> target;

    while (fin >> word) {
        if (word == target)
            count++;
    }

    cout << "Occurrences of \"" << target << "\": " << count << endl;
    fin.close();
    return 0;
}
