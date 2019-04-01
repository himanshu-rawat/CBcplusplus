//FIBONACCI PATTERN (PATTERN 4)
//Take N (number of rows), print the following pattern (for N = 4)
//0
//1 1
//2 3 5
//8 13 21 34
//
//
//Constraints:
//0 < N < 100
//
//Sample Input:
//4
//Sample Output:
//0 
//1    1 
//2    3     5 
//8   13    21    34

#include<iostream>
using namespace std;
int main(){
	int n,a,b,loop,c,j;
	cin>>n;
	a=-1;
	b=1;
	
	loop=1;
	while(loop<=n){
		j=1;
		while(j<=loop){
			c=a+b;
			cout<<c<<"\t";
			a=b;
			b=c;
		 j++;
		}
	 cout<<"\n";
	 loop++;
	}
	return 0;
	
}
