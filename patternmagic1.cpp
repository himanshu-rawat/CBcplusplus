/*
PATTERN MAGIC
You will be given a number N. You have to code a hollow diamond looking pattern. The output for N=5 is given in the following image. 
Screen Shot 2016-06-09 at 2.47.18 pm.png


Input Format:
The input has only one single integer N.

Output Format:
Output the given pattern.

Explanation:
Write a code to print above given pattern. No space between any two characters.
*/
#include<iostream>
using namespace std;
int main()
{
	int n,X,k,line,space,pspace,star,i,j;
	cin>>n;
	X=(2*n)+1;
	
	k=1;
	while(k<=(2*n-1) )
	  {
	  	cout<<"*";
	  	k++;
	  }
	cout<<"\n";
	
	line=2;
	space=1;
	while(line<=n)
	  {
	  	star=(n-line+1);
	  	i=1;
	  	while(i<=star)
	  	  {
	  	  	cout<<"*";
	  	  	i++;
		  }
		  
		pspace=(2*space-1);
		i=1;
		while(i<=pspace)
		 {
		 	cout<<" ";
		 	i++;
		 }
		 
		 star=(n-line+1);
	  	i=1;
	  	while(i<=star)
	  	  {
	  	  	cout<<"*";
	  	  	i++;
		  }
		  
		  space++;
		    cout<<"\n";
		  line++;
	  }
	  
	  star=2;
	  line=n+1;
	  pspace=pspace-2;
	  while(line<(2*n-1))
	     {
	     	i=1;
	     	while(i<=star)
	     	 {
	     	    cout<<"*";
				i++;	
			 }
			
			j=1;
			while(j<=pspace)
			 {
			 	cout<<" ";
			 	j++;
			 }
			 
			 i=1;
	     	while(i<=star)
	     	 {
	     	    cout<<"*";
				i++;	
			 }
			      cout<<"\n";
			 star=star+1;
			 pspace=pspace-2;
			 line++;
		 }
	  
	   k=1;
	while(k<=2*n-1)
	  {
	  	cout<<"*";
	  	k++;
	  }
	cout<<"\n";
	  
}
