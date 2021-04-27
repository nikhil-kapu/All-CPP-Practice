#include <iostream>
using namespace std;

int fibo(int n){
	int f=0,f2=1,nextTerm=0;
	while(nextTerm<=n){
		cout<<nextTerm<<",";
		f=f2;
		f2=nextTerm;
		nextTerm=f+f2;
	}
	return 0;
	
}

int main(){
	int n;
	cout<<"Enter the upper limit of fibo: ";
	cin>>n;
	return fibo(n);
}
