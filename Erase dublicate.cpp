#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin>>a ;
	while(a--){
		int b ;
		cin>>b ;
		string c ;
		cin>>c ;
		for(int i = 0 ;i <b ;i++){
			c[i] = tolower(c[i]);
		}
		auto it = unique(c.begin(),c.end());
		c.erase(it,c.end());

		if ( c == "meow"){
			cout<<"YES"<<'\n';
		}else{
			cout<<"NO"<<'\n';
		}
	}
}
