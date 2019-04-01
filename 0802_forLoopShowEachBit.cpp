#include<iostream>
using namespace std;
int main(){

    int n,val;
    cin>>n;
    int mask=1;
    mask=1<<30;

    for(val=mask;val>0;val=val>>1){

        if((n&val)==0){
            cout<<0;
        }
        else{
            cout<<1;
        }
    }
    
    return 0;
}