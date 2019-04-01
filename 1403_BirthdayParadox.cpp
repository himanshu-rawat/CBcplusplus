#include<iostream>
using namespace std;
int main(){
    float p;
    cin>>p;
    float  ans=1;
    float nume=365;
    float deno=365;
    int count=0;
    if(p==1){
        cout<<366;
        return 0;
        
    }
    while(ans>1-p){
        ans= ans * (nume)/(deno);
        nume--;
        count++; 
    }
    cout<<count;
    return 0;
}