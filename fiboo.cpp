/*
 Algo:-
 we iterate the loop while a value's is less than or equal to n.
 in each loop
 and print the volue of a upto the condition gets false
*/
#include<iostream>
using namespace std;
int main(){
	int n,a,b,loop,c;
	cin>>n;
	a=0;
	b=1;
	loop=1;
	while(a<=n){
		c=a+b;
		cout<<a<<endl;
		a=b;
		b=c;
	}
	return 0;
	
}
