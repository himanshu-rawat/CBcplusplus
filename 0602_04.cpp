/*
user input the value of n
we break this pattern in two part first part is upper half and second part is lower half
for first half

X=(n+1)/2;
and line =1 to X
space = (X-line) every time
and for star =2*line-1  every time

second half

line=X+1;
star=star-2;
space=1;

*/
#include<iostream>
using namespace std;
int main(){
	int n,line,X,space,i,j,star;
	cin>>n;
	X=(n+1)/2;
	line=1;
	while(line<=X){
	  	
		space=(X-line);
	  	i=1;
	  	
	  	while(i<=space){
	  	  	cout<<"  ";
	  	  	i++;
		}
		  
		star=(2*line-1);
		j=1;
		while(j<=star){
			cout<<"* ";
		   	j++;
		}
		cout<<"\n";
		line++;
	}
	  //cout<<star;
	line=X+1;
	star=star-2;
	space=1;
	
	while(line<=n){
		i=1;
		while(i<=space){
		    cout<<"  ";
			i++;	
		}
		j=1;
		while(j<=star){
		    cout<<"* ";
			j++;	
		}
		    	
		cout<<"\n";
		space++;
		star=star-2;
		line++;
	   }  	  
}