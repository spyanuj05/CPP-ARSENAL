#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std ;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    reverse(vec.begin(), vec.end());
    for (int x : vec) cout << x << " ";
    return 0;
}
