#include<iostream>
using namespace std;
int main(){
    int n,line,space,i,j,item;
    char ch,chDec;
    cin>>n;
    line=1;
    while(line<=(n+1) ){

        space=(n+1-line);
        i=1;
        while(i<=space){
            cout<<" ";
            i++;
        }
        ch='A';
        j=1;
        while(j<=(2*line-1) ){
            if(j==1 || j==(2*line-1) ){
                cout<<"O";
            }
            if(j>=2 && j<=line){
                cout<<ch;
                ch++;
            }
            if(j>=(line+1) && j<(2*line-1) ){
                chDec=ch-2;
                cout<<chDec;
                chDec--;
            }
            j++;
        }
        cout<<"\n";
        item=(2*line-1);
        line++;
        
    }
    item=item-2;
    line=n+2; 
    space=1;
    while(line<=(2*n+1) ){
        i=1;
        while(i<=space){
            cout<<" ";
            i++;
        }
        
        j=1;
        ch='A';
        while(j<=item){
            
			if(j==1 || j==item){
                cout<<"O";
            }
            if(j>=2 && j<=(item+1)/2){
                cout<<ch;
                ch++;
            }
            if(j>(item/2)+1 && j<item  ){
                chDec=ch-1;
                cout<<chDec;
                chDec--;
            }
            j++;
        }
        cout<<"\n";
        space=space+1;
        item=item-2;
        line++;
    }

    return 0;
}