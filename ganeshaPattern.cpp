/*

? GANESHA'S PATTERN
Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

Input Format:
Enter value of N ( >=5 )

Constraints:
N >= 5

Sample Input:
7
Sample Output:
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
Explanation:
Catch the pattern for the corresponding input and print it accordingly.
*/
#include<iostream>
using namespace std;
int main()
{
	int n,line,X,p1,star,i;
	
	cin>>n;
	line=1;
	X=(n+1)/2;
	while(line<=n){
		if(line ==1){
	  	    i=1;
			while(i<=n){
				if(i==1 || i>=X){
	  	      		cout<<"*";	
				}
				else{
					cout<<" ";
				}
				i++;	
			} 	
		}
			 
		if(line ==n){
			i=1;
			while(i<=n){
				if(i<=X  || i==n ){
	  	      		cout<<"*";	
				}
				else{
					cout<<" ";
				}
				i++;	
			} 	
		}
		p1=line;
	  	if(p1>=2 && p1<X){
	  		i=1;
	  	 	while(i<=n){
	  	        if(i==1 || i==X){
	  	      		cout<<"*";	
				}
		  		else{
		    		cout<<" ";
				}	
			    i++;
			}	
		}
		if(line==X){
		    star=1;
		    while(star<=n){
		    	cout<<"*";
		    	star++;
			}
		    	
		}
		p1=line;
	  	if(p1>=(X+1)&& p1<n){
	  	    i=1;
	  	 	while(i<=n){
	  	        if(i==X || i==n){
	  	      		cout<<"*";	
				}
		  		else{
		    		cout<<" ";
				}
			    i++;
			}	
		}
		cout<<"\n";
		line++;	
	}
	return 0;
}


