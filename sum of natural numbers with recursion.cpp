#include <iostream>
using namespace std;
int add(int n){
	if(n !=0){
		return n+add(n-1);
	}
		
	return 0;
}
int main(){
	int n, sum =0;
	
	cout<<"Enter a Natural Number";
	cin>>n;
	
	cout<<"sum="<<add(n);
	return 0;
}

