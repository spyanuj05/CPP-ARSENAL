#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin>>a;
	long long  t1 = 0 , t2 = 1 ,t3 = 2 , tnext = 0 ;
	for(int i = 0 ; i<a ; i++){
		if ( i==0){
			cout<<t1<<" ";
			continue ;
		}
		if ( i == 1){
			cout<<t2<<" "; 
			continue ;
		}
		if ( i == 2 ){
			cout<<t3<<" ";
			continue;
		}
		tnext = t1 + t2 + t3 ;
		t1 = t2 ;
		t2 = t3;
		t3 = tnext;
		cout<<tnext <<" ";
	}
	cout<<endl;
}
