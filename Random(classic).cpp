#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

int main() {
    srand(time(0)); 
    int min = 10;
    int max = 50;
    int number = (rand() % (max - min + 1)) + min;
  
    cout << "Generated random number: " << number << endl;

    return 0;
}
