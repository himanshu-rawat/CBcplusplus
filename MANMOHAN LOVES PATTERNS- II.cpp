/*
MANMOHAN LOVES PATTERNS- II
Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.


Input Format:
Single integer N denoting number of lines of the pattern.

Constraints:
N<=1000

Output Format:
Pattern.

Sample Input:
5
Sample Output:
1
11
202
3003
40004
*/
#include<iostream>
using namespace std;
int main(){
	int n,loop,line,i;
	cin>>n;
	loop=2;
	line=1;
	cout<<1<<endl;
	while(loop<=n){
		i=1;
		while(i<=loop){
			if(i==1 || i==loop){
				cout<<line;
			}
			else{
				cout<<0;
			}
			i++;
		}
		cout<<"\n";
		line++;
		loop++;
	}
}
