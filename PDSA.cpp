/*
PATTERN DOUBLESIDEDARROW
Take N as input. For a value of N=7, we wish to draw the following pattern :

                            1 
                        2 1   1 2 
                    3 2 1       1 2 3 
                4 3 2 1           1 2 3 4 
                    3 2 1       1 2 3 
                        2 1   1 2 
                            1 

Input Format:
Take N as input.

Constraints:
N is odd number.

Output Format:
Pattern should be printed with a space between every two values.

Sample Input:
7
Sample Output:
            1 
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1 
*/
#include<iostream>
using namespace std;
int main(){
	int n,X,line,space,space2,numInc,numDec,i,j,k=1,last;
	cin>>n;
	line=1;
	X=(n+1)/2;
	space=n-1;
	while(line<= X ){
		i=1;
		while(i<=space){
			cout<<"  ";
			i++;
		}
		
		numInc=line;
		while(numInc>=1){
			cout<<numInc<<" ";
			numInc--;
		}
		
		
		if(line>=2 && line<=X){
			space2=2*k-1;
			i=1;
			while(i<=space2){
				cout<<"  ";
				i++;
			}
			k=k+1;
			
			numDec=1;
			while(numDec<=line){
				cout<<numDec<<" ";
				numDec++;
			}
		}
		space=space-2;
		cout<<"\n";
		
		line++;
	}
//	cout<<"space2= "<<space2<<endl;
//	cout<<"space= "<<space<<endl;
    space2=space2-2;
	space=space+4;
	numDec=X-1;
	last=X-1;
	line=X+1;
	while(line<=n){
		i=1;
		while(i<=space){
			cout<<"  ";
			i++;
		}
		
		j=numDec;
		while(j>=1){
			cout<<j<<" ";
			j--;
		}
		
		i=1;
		while(i<=space2){
			cout<<"  ";
			i++;
		}
		
		i=1;
		while(i<=last ){
			if(last==1){
				break;
			}
			cout<<i<<" ";
			i++;
		}
		last--;
		
		numDec--;
		space=space+2;
		space2=space2-2;
		cout<<"\n";
		line++;
	}
	line=X+1;	
	return 0;
}
