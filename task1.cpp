#include <iostream>
using namespace std;

int main() {
    string fruits[4] = {"peach", "apple", "guava", "watermelon"};
    string inputFruit;
    int costs[4], amount, billTotal;
    costs[0] = 60;
    costs[1] = 70;
    costs[2] = 40;
    costs[3] = 30;

    cout << "Enter the name of fruit: ";
    cin >> inputFruit;
    cout << "Enter Quantity: ";
    cin >> amount;

    for(int i = 0; i < 4; i++) {
        if(inputFruit == fruits[i]) {
            billTotal = costs[i] * amount;
        }
    }
    
    cout << "Total bill is: " << billTotal;
}
