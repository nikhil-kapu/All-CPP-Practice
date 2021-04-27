#include <iostream>
using namespace std;

int table(int n, int i){

	cout<<n <<"*"<<i<<"="<<n*i<<endl;
	return table(n,i+1);
	
}

int main(){
	int n;
	cout<<"What table do u want ?";
	cin>>n;
	return table(n,1);
}
