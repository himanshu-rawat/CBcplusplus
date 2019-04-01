#include<iostream>
using namespace std;
int main(){
	
	int n,i;
	cout<<"Enter Your Number"<<endl;
	cin>>n;
	i=1;
	cout<<"Even are"<<endl;
	while(i<=n){
		if(i%2==0){
			cout<<i<<" ";
		}
		i++;
	}
	
	cout<<"\n";
	
	i=1;
	cout<<"Odd are"<<endl;
	while(i<=n){
		if(i%2==1){
			cout<<i<<" ";
		}
		i++;
	}
	
	
	return 0;
}
