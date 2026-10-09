#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	int sum = 0 ;
	cin>>a ;
	for ( int i = 0 ; i<=a ; i++){
		sum += (i*i);
	}
	cout<<sum<<endl;
	return 0 ;
}
