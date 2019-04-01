// we assign first=0 and second =1 and then print it on console and after it print the fibona

#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n;
	a=0;
	b=1;
	c=1;
	if(n==0){
		cout<<0<<endl;
		}
	if(n>2){
		cout<<0<<endl<<1<<endl;
	}
	
	while(c<=n){
		if(n==1){
			cout<<0<<endl;
			break;
		}
		if(n==2){
			cout<<0<<endl<<1<<endl;
			break;
		}
		if(n>2){
			c=a+b;
			
			if(c>n){
				break;
			}
			cout<<c<<endl;	
			a=b;
			b=c;
		}
		
	}


	return 0;
}
