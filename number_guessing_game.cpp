#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // Seed the random number generator with the current time
    int targetNumber = rand() % 100 + 1;  // Generate a random number between 1 and 100
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    
    while (true) {
        cout << "Guess a number between 1 and 100: ";
        cin >> userGuess;
        attempts++;
        
        if (userGuess < targetNumber) {
            cout << "Too low! Try again.\n";
        } else if (userGuess > targetNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number " << targetNumber
                      << " in " << attempts << " attempts.\n";
            break;
        }
    }
    
    return 0;
}