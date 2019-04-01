/*
HOLLOW RHOMBUS PATTERN
Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

Input Format:
Single integer N.

Constraints:
N <= 20

Output Format:
Print pattern.

Sample Input:
5
Sample Output:
    *****
   *   *
  *   *
 *   *
*****
Explanation:
For any input N. First line contains 4 space and then 5 {*} and then the second line contains according to the output format.

Algo:-
space star space star
space => (n-line)
if(line==1 or line ==n) => print * n times
if (line>=2 And line<n) =>  ( star=1 to n =>  if star ==1 or star==n then print * else print " ")
*/
#include<iostream>
using namespace std;
int main(){
	int n,line,space,i,star;
	cin>>n;
	line=1;
	while(line<=n){
		space=1;
		while(space<=(n-line) ){
			cout<<" ";
			space=space+1;
		}
		if(line==1 || line==n){
			i=1;
			while(i<=n){
				cout<<"*";
				i=i+1;
			}
		}
		
		if(line>=2 && line<n){
			star=1;
			while(star<=n){
			if(star==1 || star==n){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
			star=star+1;
		}
		}
		cout<<"\n";
		line=line+1;
	}
}
