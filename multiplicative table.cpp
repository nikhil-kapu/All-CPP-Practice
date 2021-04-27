#include <iostream>
using namespace std;

int table(int n){
	for(int i=0;i<=10;i++){
		cout<<n <<"*"<<i<<"="<<n*i<<endl;
	}
	return 0;
}

int main(){
	int n;
	cout<<"What table do u want ?";
	cin>>n;
	return table(n);
}
