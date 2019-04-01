#include<iostream>
using namespace std;
int main()
{
	int n,line,space,i,j,k;
	cin>>n;
	line=1;
	space=(2*n-1-2);
	k=1;
	
	while(line<n){
		i=1;
		
		while(i<=line){
			cout<<i<<"\t";
			i=i+1;
			
		}
		
		j=1;
		while(j<=space){
			cout<<" \t";
			j++;
		}
		space=space-2;
		
		j=1;
		while(j<=line){
		   	cout<<k<<"\t";
		   	j++;
		   	k--;
		}
		k=k+line+1;
		 cout<<"\n";
	  line++;	
	}
	
	i=1;
	while(i<=n){
		cout<<i<<"\t";
		i++;
	}
	j=(n-1);
	while(j>=1){
		cout<<j<<"\t";
		j--;
	}
}
