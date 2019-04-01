#include<iostream>
using namespace std;
int main(){
	int n,X,line,space,numInc,i;
	cin>>n;
	line=1;
	X=n+1/2;
	while(line<=X){
		space=n-1;
		i=1;
		while(i<=space){
			cout<<" ";
			i++;
		}
		
		numInc=line;
		i=1;
		while(numInc>=1){
			cout<<numInc;
			numInc--;
		}
		
		space=space-2;
		cout<<"\n";
		line++;
	}
}
