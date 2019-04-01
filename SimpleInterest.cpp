#include<iostream>
using namespace std;
int main(){
	
	int p,r,t;
	float si;
	cout<<"Enter Principal , Rate and Time"<<endl;
	cin>>p>>r>>t;
	
	si=(p*r*t)/100.0;
	cout<<"The Simple Interest is :"<<si<<endl;
	
	return 0;
}
