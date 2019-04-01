/*
PATTERN HOURGLASS
Take N as input. For a value of N=5, we wish to draw the following pattern :

                          5 4 3 2 1 0 1 2 3 4 5
                            4 3 2 1 0 1 2 3 4 
                              3 2 1 0 1 2 3 
                                2 1 0 1 2 
                                  1 0 1 
                                    0 
                                  1 0 1 
                                2 1 0 1 2 
                              3 2 1 0 1 2 3 
                            4 3 2 1 0 1 2 3 4 
                          5 4 3 2 1 0 1 2 3 4 5

Input Format:
Take N as input.

Output Format:
Pattern should be printed with a space between every two values.

Sample Input:
5
Sample Output:
 5 4 3 2 1 0 1 2 3 4 5
   4 3 2 1 0 1 2 3 4 
     3 2 1 0 1 2 3 
       2 1 0 1 2 
         1 0 1 
           0 
         1 0 1 
       2 1 0 1 2 
     3 2 1 0 1 2 3 
   4 3 2 1 0 1 2 3 4 
 5 4 3 2 1 0 1 2 3 4 5

*/

#include<iostream>
using namespace std;
int main()
{
	 int n,line,dec,inc,i,space,num;
	 cin>>n;
	 line=0;
	 while(line<=n)
	  {
	  	space =1;
	  	while(space<=line)
	  	 {
	  	 	cout<<"  ";
	  	  space++;
		 }
		 
		 dec=(n-line);
		 while(dec>=0)
		   {
		   	cout<<dec<<" ";
		    dec--;
		   }
		 
		 inc=(n-line);
		 i=1;
		 while(i<=inc) 
		   {
		   	   cout<<i<<" ";
		   	i++;
		   	 
		   }
		 
		 
	      cout<<"\n";
	   line++;
	  }
	  
	  
	  line=1;
	  while(line<=n)
	 {
	 	space=line;
	 	while(space<n)
	 	{
	 		cout<<"  ";
	 	    space++;
		}
		
		num=line;
		while(num>=0)
		  {
		  	cout<<num<<" ";
		  num--;
		  }
		  
		i=1;
		while(i<=line)
		{
			cout<<i<<" ";
			i++;
		}
		cout<<"\n";
		line++;
	 }
}
