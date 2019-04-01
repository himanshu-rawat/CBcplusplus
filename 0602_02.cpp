/*
a b c d e
b a c c d
c b a b c
d c b a b
e d c b a 
Algo:-
First of all we break the pattern into 2 parts
first part is a 
              b a
              c b a
              and so on
so for this part we initailise a variable char ch =64 
and for each loop we add line no. to that variable (ch = 64+line)
and in each loop it print line number of items

second part is b c d e
                 b c d
                   b  c
                and so on
in this part ch always start with b so we assign b every time
and print ch in increasing order till (n-line)
            
*/
#include<iostream>
using namespace std;
int main()
{
	int num,i,line;
	char ch;
	cin>>num;
	line=1;
	while(line<=num)
	  {
	  	i=1;
	  	ch=96+line;
	  	while(i<=line)
	  	  {
	  	  	cout<<ch<<" ";
	  	  	ch=ch-1;
	  	  	i++;
			}
		
		ch='b';
		i=1;
		while(i<=(num-line) )
		 {
		 	cout<<ch<<" ";
		 	ch++;
		 	i++;
		 }
		   cout<<"\n";
	  	
		line++;
	  }
}