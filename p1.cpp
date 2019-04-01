// simply initialze num=1 and increase it every time 
// print element the line numbers time
//after each element print a tab space is required
#include<iostream>
using namespace std;
int main(){
	
	int n,i,line,num=1;
	cin>>n;
	line=1;
	while(line<=n){
		  
		i=1;
		while(i<=line){
			cout<<num<<"\t";
			i++;
			num++;
		} 
		cout<<"\n";
		line++;
	}
	
	return 0;
}
