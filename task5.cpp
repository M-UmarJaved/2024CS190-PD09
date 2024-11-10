#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter size of array: ";
    cin >> length;
    string words[length];

    for (int i = 0; i < length; i++) {
        cout << "Enter element " << i + 1 << " of array: ";
        cin >> words[i];
    }

    bool areAllSame = true;
    for (int j = 0; j < length - 1; j++) {
        if (words[j] != words[j + 1]) {
            areAllSame = false;
            break;
        }
    }

    if (areAllSame) {
        cout << "true";
    } else {
        cout << "false";
    }
}
