//1 To N and N to 1
#include<iostream>
using namespace std;
int main(){
	
	int n,loop,checkNum,i;
	cin>>n;
	loop=2;
	while(loop<=n){
		checkNum=loop;
		i=2;
		while(i<checkNum){
			if(checkNum%i==0){
				break;
			}
			i=i+1;
		}
		if(i==checkNum){
			cout<<i<<endl;
		}
	  loop=loop+1;
	}
	
	
	return 0;
}
