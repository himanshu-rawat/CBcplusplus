#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int mask=1;
    mask=mask<<30;
    while(mask>0){
        if( (mask&n)==0 ){
            cout<<0;
        }
        else{
            cout<<1;
        }
        mask=mask>>1;
        
    }
    return 0;
}