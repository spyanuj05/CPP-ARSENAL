#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    cin >> a;
    
    int arr[a];
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    } 
    int k;
    cin >> k; 
    k %= a;  
    reverse(arr, arr + k);
    reverse(arr + k, arr + a);
    reverse(arr, arr + a);
    
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " "; 
    }
    cout << "\n";
    
    return 0;
}

//Think of k as the "shift count". For example, if your array is [1, 2, 3, 4, 5]:
//• If k = 1: Every element moves left by 1 spot. The 1 falls off the front and goes to the back.
//	• Result: [2, 3, 4, 5, 1]
//• If k = 2: Every element moves left by 2 spots. The first two elements (1 and 2) go to the back.
	//• Result: [3, 4, 5, 1, 2]
//• If k = 0: The array doesn't move at all.
//	• Result: [1, 2, 3, 4, 5] //
