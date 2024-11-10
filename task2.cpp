#include <iostream>
using namespace std;

int main() {
    string filmTitles[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    string chosenFilm;
    float discountRate;
    
    cout << "Enter the name of Movie: ";
    cin >> chosenFilm;
    
    for(int i = 0; i < 5; i++) {
        if(filmTitles[i] == chosenFilm && i % 2 == 0) {
            discountRate = 0.05;
        } else {
            discountRate = 0.1;
        }
    }
    
    int finalPrice = 500 - (500 * discountRate);
    cout << "Price of movie is: " << finalPrice;
}
