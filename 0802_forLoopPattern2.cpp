#include<iostream>
using namespace std;
int main(){

    int n,line,i,X,val=1,space;
    char ch='A';
    cin>>n;
    X=(n*2)-1;

    for(line=1;line<=n;line++){

        for(space=1;space<=(n-line);space++){
            cout<<" ";
        }
        
        for(i=1;i<=2*line-1;i++){
            if(i==1 || i==2*line-1){
                cout<<ch;
                ch++;
            }
            else if(i==line){
            cout<<val;
            val++;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;                       
    }
    ch=ch-1;
    val=val-1;
    space=1;
    for(line=n+1;line<=X;line++){
            for(i=1;i<=space;i++){
                cout<<"-";

            }
        cout<<"\n";
        space++;
    }

    
    return 0;
}