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
	  	  	cout<<" \t";
	  	  	i++;
		}
		  
		star=(2*line-1);
		j=1;
		while(j<=star){
			cout<<"*\t";
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
		    cout<<" \t";
			i++;	
		}
		j=1;
		while(j<=star){
		    cout<<"*\t";
			j++;	
		}
		    	
		cout<<"\n";
		space++;
		star=star-2;
		line++;
	   }  	  
}
