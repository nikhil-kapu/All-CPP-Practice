#include <iostream>
using namespace std;
int main(){
	int year;
	cout<<"Please enter the year";
	cin>>year;
	
	if(year%4==0){
		if(year%100==0){
			if(year%400){
				cout<<"It's a leap year";
			}
			else
				cout<<"It's not a leap year";
		}
		else
			cout<<"It's a leap year";
	}
	else
		cout<<"Year is not leap";
	
	return 0;
	
}
