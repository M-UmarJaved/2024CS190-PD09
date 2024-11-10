#include <iostream>
using namespace std;

string isEvenLength(string text) {
    int length = 0;
    for (length = 0; text[length] != '\0'; length++) {
        // No action needed, just incrementing length
    }
    if (length % 2 == 0) {
        return "true";
    } else {
        return "false";
    }
}

int main() {
    string inputWord;
    cout << "Enter any word: ";
    cin >> inputWord;
    cout << isEvenLength(inputWord);
}
