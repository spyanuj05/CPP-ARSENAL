#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;
    double factorial = 1.0;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial *= i;        
        sum += (double)i / factorial;
    }
    cout << "The sum of the series is: " << sum << endl;
    return 0;
}
