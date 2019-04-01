/*
Algo:-
First take input num which have to printed ,and number of line
input num, nline
line start with num and after each loop num*2 increment.

and for element in each line the number of element are 2^counter where counter = nline 
*/



#include<iostream>
using namespace std;
int main()
{
	int num,val,nline,counter=1,i,line;
	cin>>num;
	cin>>nline;
	line=1;
	while(line<=nline)
	  {
	  	i=1;
	  	val=num;
	  	   while(i<=counter)
	  	     {
	  	     	cout<<val<<" ";
	  	     	val++;
	  	     	i++;
			 }
		
		   cout<<"\n";
		counter=counter*2;
		num=num*2;
		line++;
	  }
}