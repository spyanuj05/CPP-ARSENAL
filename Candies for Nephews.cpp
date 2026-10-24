#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin>>a ;
	while(a--){
		int b ;
		cin>>b ;
		if(b%3==0){
			cout<<0<<'\n';
		}else{
			cout<<3-(b%3)<<'\n';
		}
	}
}
