// we first get each digit of num by using modulus on it and reverse the number and store it in rev and
// and after the n gets 0 we print the number .
#include<iostream>
using namespace std;
int main(){
	int n,rem,rev=0;
	cin>>n;
	while(n>0){
		rem=n%10;
		
		rev=rev*10+rem;
		
		n=n/10;
		
	}
	cout<<rev;
	return 0;
}
