#include<iostream>
using namespace std;
int main(){
    int a[1000],b[1000],sum[1000]={0};
    int n,m,i,size,val,carry=0,number;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    if(n>m){
        size=n;
    }
    else{
        size=m;
    }

    for(i=(size-1);i>=0;i--){
        carry=0;
        val=a[i]+b[i];
        if(val>9){
            number=val%10;
            sum[i]=number;    
        }
        carry=val/10; 
        sum[i]=val+carry;


    // }
    

    

    
    return 0;
}