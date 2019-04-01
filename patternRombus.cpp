/*
PATTERN RHOMBUS
Take N (number of rows), print the following pattern (for N = 3).

                         1
                       2 3 2
                     3 4 5 4 3
                       2 3 2
                         1

Constraints:
0 < N < 10

Sample Input:
3
Sample Output:
        1
	2	3	2
3	4	5	4	3
	2	3	2
		1

Algo:-
Break into Upper and Lower Half.

Then for Upper Half
print spaces (X-line) line 
then start with line number and print upto 2*line-1
and last part multiple of two every time.

For Lower Half 
line start with X+1 and goes upto n
space start with 1 and increase every time 

And for number part please refer to code its all initialization of old values 
with new value after some calculation.
*/
#include<iostream>
using namespace std;
int main(){
    int n,line,X,space,i,numInc,twomultiple=0,j,store,init,terminate;
    int start,end;
    cin>>n;
    X=(n+1)/2;
    line=1;
    
    while(line<=n){
        space=(n-line);
        i=1;
        while(i<=space){
            cout<<" \t";
            i++;
        }
        
    numInc=line;
    
    while(numInc<=(2*line-1) ){
        cout<<numInc<<"\t";
        numInc++;
    }

    i=1;
    j=(line-1);
    store=twomultiple;
    while(i<=j){
        cout<<store<<"\t";
        store--;
        i++;
    }
    twomultiple=twomultiple+2;

     cout<<"\n";
     line++;
    }
    
    line=n+1;
    space=1;
    start=(n-1);
    end=numInc-3;
    twomultiple=twomultiple-4;
    terminate=n-2;
    while(line<=(2*n-1)){
        i=1;
        while(i<=space){
            cout<<" \t";
            i++;
        }
    j=start;
    while(j<=end ){
          cout<<j<<"\t";
        j++;
    } 
    
    init=twomultiple;
    
    i=1;
    while(i<=terminate){
		cout<<init<<"\t";
        init--;
        i++;
    }
    cout<<"\n";
    start=start-1;
    end=end-2;
    twomultiple=twomultiple-2;
    terminate--;
    space++;
    line++;
    }

    return 0;
}
