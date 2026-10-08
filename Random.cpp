#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device rd;   
    mt19937 gen(rd()); 

    // Define range from 1 to 100
    uniform_int_distribution<int> distrib(1, 100); 

    cout << "Random number: " << distrib(gen) << endl;
    
    return 0;
}
