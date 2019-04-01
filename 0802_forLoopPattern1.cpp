#include<iostream>
using namespace std;
int main(){

    int n,line,i,X,val=1,space;
    char ch='A';
    cin>>n;
    \

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

    
    return 0;
}