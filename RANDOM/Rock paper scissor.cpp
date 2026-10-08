#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  
    int player;
    cout << "Enter 1 for Rock, 2 for Paper, 3 for Scissors: ";
    cin >> player;

    
    srand(time(0)); 
    int computer = (rand() % 3) + 1;

    
    if (computer == 1) cout << "Computer chose: Rock\n";
    if (computer == 2) cout << "Computer chose: Paper\n";
    if (computer == 3) cout << "Computer chose: Scissors\n";


    if (player == computer) {
        cout << "It's a tie!\n";
    } 
    else if ((player == 1 && computer == 3) || 
             (player == 2 && computer == 1) || 
             (player == 3 && computer == 2)) {
        cout << "You win!\n";
    } 
    else {
        cout << "You lose!\n";
    }

    return 0;
}
