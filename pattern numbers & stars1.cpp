/*
PATTERN NUMBERS & STARS - 1
Take as input N, a number. Print the pattern as given in output section for corresponding input.


Input Format:
Enter value of N

Output Format:
All numbers and stars are Space separated

Sample Input:
5
Sample Output:
1 2 3 4 5
1 2 3 4 * 
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *

Alog:-
it break into three part 
line 1 = 1 to n print
line 2 To N it break into two part first is numbers in increasing order and then stars

*/

#include<iostream>
using namespace std;
int main()
{
	int n,i,num,star;
	cin>>n;
	
	i=1;
	while(i<=n)
	  {
	  	cout<<i<<" ";
	  	i++;
	  }
	cout<<"\n";
	i=1;
	while(i<n)
	  {
	  	 num=1;
		 while(num<= (n-i) )
		   {
		   	 cout<<num<<" ";
		     num++;	
		   }
		   
		 star=1;
		 while(star<=(2*i-1))
		   {
		   	cout<<"* ";
		   	star++;
		   }
		  
	    cout<<"\n";
	    i++;  
	   } 
}
