#include<iostream>
using namespace std;
int main(){

    int n,line,space,i,j,VAL=1,end,k;
    char ch='A',chh;
     
    cin>>n;
    line=1;
    while(line<=n){
        space=(n-line);
        i=1;
        while(i<=space){
            cout<<" ";
            i++;
        }
        i=1;
        while(i<=(2*line-1) ){
            if(i==1 || i==(2*line-1) ){
                cout<<ch;
                ch++;
            }
            else if(i== ( (2*line-1)/2)+1 ){
                cout<<VAL;
                VAL++;
            }
            else{
                cout<<"*";
            }

            i++;
        }
        end=2*line-1;
        line++;
        cout<<"\n";
        
    }

    end=end-2;
   // cout<<"end="<<end;
    ch=ch-4;
   // chh='@';
    //cout<<"ch="<<ch;
    line=n+1;
    space=1;
    VAL=VAL-2;
    // k=( ( (2*end-1)/2)+1 )/2 +1;
    // cout<<"k="<<k<<endl;
    while(line<=2*n-1){
          
        i=1;
        while(i<=space){
            cout<<" ";
            i++;
        }

        j=1;
        while(j<=end){
            if(j==1 || j==end){
                
                if(ch=='@'){
                    ch='A';
                }
                cout<<ch;
                ch++;
            }
            else if(j== (( (2*end-1)/2)+1)/2 +1 ){
                cout<<VAL;
                VAL--;
            }
            else{
                cout<<"*";
            }

            j++;
        }

        
        cout<<"\n";
        end=end-2;
        ch=ch-4;
        space++;
        line++;
    }

    return 0;
}