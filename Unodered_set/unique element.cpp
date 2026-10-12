#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	int a,b;
	cin>>a ;
	unordered_set <int> ax ;
	for ( int i = 0 ; i<a ;i++){
		cin>>b;
		ax.insert(b);
	}
	cout<<ax.size() ; 
}
