/*
PATTERN WITH ZEROS
Take N (number of rows), print the following pattern (for N = 5)
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5


Constraints:
0 < N < 100

Sample Input:
5
Sample Output:
1  
2	2  
3	0	3    
4	0	0	4  
5	0	0	0	5
*/
#include<iostream>
using namespace std;
int main()
{
	int n,line,i;
	cin>>n;
	line=1;
	while(line<=n){
		i=1;
		while(i<=line){
			if(i==1 || i==line){
				cout<<line<<" ";
			}
			else{
				cout<<"0 ";
			}
			i=i+1;
		}
	 cout<<endl;
	 line=line+1;
	}
}
