#include<iostream>
using namespace std;
int main(){
    int n,X,line,five,i,space,start,lower;
    cin>>n;
    X=2*n+1;
    
    space=(2*n)+1-2;
    line=1;
    while(line<=n){
        i=1;
        five=n;
        while(i<=line){
            cout<<five<<" ";
            five--;
            i++;
        }

    i=1;
    while(i<=space){
        cout<<"  ";
        i++;
    }
    
    start=(n-line+1);
    i=1;
    while(i<=line){
        cout<<start<<" ";
        start++;
        i++;
    }

        cout<<"\n";
        space=space-2;
        line++;
    }
    
   // cout<<"space= "<<space<<endl;

    i=n;
    while(i>=0){
        cout<<i<<" ";
        i--;
    }

    i=1;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }
    cout<<"\n";

   line=1;
   lower=n;
   while(line<=n){
       five=n;
       i=1;
       while(i<=lower){
           cout<<five<<" ";
           five--;
           i++;
       }
       
       space=2*line-1;
       i=1;
       while(i<=space){
       	cout<<"  ";
       	i++;
	   }

       i=line;
       while(i<=n){
           cout<<i<<" ";
           i++;
       }

       cout<<"\n";
       lower--;
       space=space+2;
       line++;
   }  
  
}
