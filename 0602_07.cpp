#include<iostream>
using namespace std;
int main(){
    int n,line,i,space;
    char ch='A';
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
            else{
                cout<<"*";
            }

            i++;
        }
        line++;
        cout<<"\n";
    }

}