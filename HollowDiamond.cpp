/*
HOLLOW DIAMOND PATTERN(PATTERN 6)
Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *

Constraints:
0 < N < 10 (where N is an odd number)

Sample Input:
5
Sample Output:
*	*	*       *      *		  
*	*	        *      *
* 	                       *
* 	*               *      *
* 	*	*       *      *	
Explanation:
Each '*' is separated from other by a tab.
*/
#include<iostream>
using namespace std;
int main()
{
	int n,X,k,line,space,pspace,star,i,j;
	cin>>n;
	X=(n+1)/2;
	
	k=1;
	while(k<=n)
	  {
	  	cout<<"*\t";
	  	k++;
	  }
	cout<<"\n";
	
	line=2;
	space=1;
	while(line<=X)
	  {
	  	star=(X-line+1);
	  	i=1;
	  	while(i<=star)
	  	  {
	  	  	cout<<"*\t";
	  	  	i++;
		  }
		  
		pspace=(2*space-1);
		i=1;
		while(i<=pspace)
		 {
		 	cout<<" \t";
		 	i++;
		 }
		 
		 star=(X-line+1);
	  	i=1;
	  	while(i<=star)
	  	  {
	  	  	cout<<"*\t";
	  	  	i++;
		  }
		  
		  space++;
		    cout<<"\n";
		  line++;
	  }
	  star=2;
	  line=X+1;
	  pspace=pspace-2;
	  while(line<n)
	     {
	     	i=1;
	     	while(i<=star)
	     	 {
	     	    cout<<"*\t";
				i++;	
			 }
			
			j=1;
			while(j<=pspace)
			 {
			 	cout<<" \t";
			 	j++;
			 }
			 
			 i=1;
	     	while(i<=star)
	     	 {
	     	    cout<<"*\t";
				i++;	
			 }
			      cout<<"\n";
			 star=star+1;
			 pspace=pspace-2;
			 line++;
		 }
	  
	   k=1;
	while(k<=n)
	  {
	  	cout<<"*\t";
	  	k++;
	  }
	cout<<"\n";
	  
}
