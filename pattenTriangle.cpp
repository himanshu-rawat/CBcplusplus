/*
PATTERN TRIANGLE
Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4

Constraints:
0 < N < 10

Sample Input:
4
Sample Output:
            1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4


Alogrithm:
Space              Number Decreasing   				 Number Increasing

line=1                   num=line						num=(2*line-2)
														j=1 to line1 
n-line space 			print 2*line-1 times		 print num value 
in each line			num value each time				decrease num value each time and increase j value each time
*/
#include<iostream>
using namespace std;
int main()
{
	int n,line,num,j,space;
	cin>>n;
	line=1;
	while(line<=n)
	{  
	    space=1;
	    while(space<=(n-line) )
	      {
	      	cout<<"  ";
	      	space++;
		  }
		num=line;
		while(num<= (2*line-1) )
		{
			cout<<num<<" ";
		  num++;
		}
		num=(2*line-2);
		j=1;
		while(j<=(line-1) )
		 {
		 	cout<<num<<" ";
		 	num--;
		 	j++;
	   	 }
	   	 
			 cout<<"\n";
		line++;
	}
}
