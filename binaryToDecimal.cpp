//we have given n 
//each time we obtain the last digit of n and do some calculation to obtain the decimal of given binary number.

#include<iostream>
using namespace std;
int main()
{
	int n,two,val,product,sum;
	cin>>n;
	two=1;
	sum=0;
	while(n>0){
		
		val=n%10;

		product=val*two;
	
		sum=sum+product;
		
		two=two*2;
		n=n/10;
	}
	cout<<sum;
	return 0;
}
