#include<iostream>
using namespace std;
int fact(int n){
	int facto;
	for(int i=1;i<=n;i++){
		facto*=i;
	}
	return facto;
}

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	return fact(n);
	return 0;
}
