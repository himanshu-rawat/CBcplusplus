#include<iostream>
using namespace std;
int main()
{
	int n,eight,val,product,sum;
	cin>>n;
	sum=0;
	while(n>0){
		
		val=n/10;
		sum=sum*10+val;
		n=n/10;
	}
    cout<<sum;
	return 0;
}
