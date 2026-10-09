#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(0));
    char a;
    cout << "PRESS R TO ROLL THE DICE" << endl;
    cin >> a;
    
    if (a == 'R' || a == 'r') {
        int b = (rand() % 6 + 1);
        if (b == 6) {
            cout << "YOU NAILED IT (6)" << endl;
        } else if (b == 1) {
            cout << "BETTER LUCK NEXT TIME(1) " << endl;
        } else {
            cout << "KEEP IT UP " << " " << b << endl;
        }
    } else {
        cout << "PRESS VALID INPUT" << endl;
    }
    
    return 0; 
}
