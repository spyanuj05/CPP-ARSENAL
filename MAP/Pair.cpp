#include <iostream>
#include <map>
using namespace std;

int main(){
	int a,b;
	cin>>a ;
	map<int ,int> dict;

	for (int i = 0 ;i<a ;i++){
		cin>>b ;
		dict[b]++; // adding to the dict
	}
	for(auto const& [key ,val]: dict){
		cout<<val<<endl;
	}
}
// it will print the ferqency of each element 
