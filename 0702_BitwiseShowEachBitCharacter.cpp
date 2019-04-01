#include<iostream>
using namespace std;
int main(){

    char ch;
    cin>>ch;
    int mask=1;
    mask=mask<<7;
    while(mask>0){
        if( (mask&ch)==0 ){
            cout<<0;
        }
        else{
            cout<<1;
        }
        mask=mask>>1;
        
    }
    return 0;
}