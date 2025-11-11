// Experiment 11: Implement Generic Vector Operations

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    cout << "Original Vector: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // Modify value of a given element
    int pos, newVal;
    cout << "Enter position to modify (0-based index): ";
    cin >> pos;
    cout << "Enter new value: ";
    cin >> newVal;
    if (pos >= 0 && pos < v.size())
        v[pos] = newVal;

    // Multiply vector by scalar
    int scalar;
    cout << "Enter scalar to multiply vector: ";
    cin >> scalar;
    for (int &i : v)
        i *= scalar;

    // Display final vector
    cout << "Updated Vector: (";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) cout << ", ";
    }
    cout << ")" << endl;

    return 0;
}
