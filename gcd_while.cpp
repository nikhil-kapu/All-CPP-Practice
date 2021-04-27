#include<iostream>
using namespace std;
int gcd(int n1,int n2){
	int gcdf;
	while(n1!=n2){
		if(n1>n2)
			n1 -= n2;
		else
			n2-=n1;
	}
	gcdf=n1;
	return gcdf;
}
int lcm(int n1,int n2){
	int lcmf,gcdf;
	lcmf=(n1*n2)/gcd(n1,n2);
	cout<<"LCM is: "<<lcmf;
}
int main(){
	int n1,n2,gcd;
	cout<<"Enter the first number: ";
	cin>>n1;
	cout<<"Enter the second number: ";
	cin>>n2;
	return lcm(n1,n2);
}
