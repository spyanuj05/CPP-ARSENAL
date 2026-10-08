#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;
int main() {
    srand(time(0)); 
    int number = (rand() % 100) + 1; 
    int guess = 0;
    cout << "Guess the number between 10 and 50!" << endl;
    while (guess != number) {
        cout << "Enter guess: ";
        cin >> guess;
        if (guess > number) {
            cout << "Too high!" << endl;
        } else if (guess < number) {
            cout << "Too low!" << endl;
        }
    }
    cout << "You win!" << endl;
    return 0;
}
// These is the guessing game using the c++ simple code ; 
