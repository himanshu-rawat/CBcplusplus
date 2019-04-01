#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
//	while(i*i<=n){
//		i++;
//	}
//	i=i-1;
//	cout<<"Integer Part is "<<i<<endl;
//	
	
	
	int currentPrecision=0,decimalPoint=2;
	float i=0;
	float inc=1;
	while(i*i<=n){
		while(currentPrecision<=decimalPoint){
		while(i*i<=n){
			i=i+inc;
		}
		i=i-inc;
		inc=inc/10;
		currentPrecision=currentPrecision+1;
	}
		
		i++;
	}
	cout<<"ANs is :"<<i<<endl;
}
