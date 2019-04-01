#include<iostream>
using namespace std;
int main(){
	int n,i,multiple;
	cin>>n;
	i=1;
	while(i<=n){
		
		multiple= 3*i+2;
		
		if(multiple%4==0){
			
			break;
		}
		cout<<multiple<<endl;
		i++;
	}
}
