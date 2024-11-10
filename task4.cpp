#include <iostream>
using namespace std;

int main() {
    int size;
    bool containsSeven = false;
    cout << "Enter the size of array: ";
    cin >> size;
    int values[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << " of array: ";
        cin >> values[i];
    }

    for (int j = 0; j < size; j++) {
        if (values[j] % 10 == 7 || values[j] / 10 == 7) {
            containsSeven = true;
            break;
        }
    }

    if (containsSeven) {
        cout << "BOOMS!";
    } else {
        cout << "None of the items contain 7 within them.";
    }
}
