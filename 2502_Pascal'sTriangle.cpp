#include<iostream>
using namespace std;

int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n, int r){
    int ncr;
    ncr = factorial(n) / ( factorial(r)*factorial(n-r) );
    return ncr;
    // cout<<"The Value of nCr is = "<<ncr<<endl;  
}

int main(){
    int num,i,j;
    cin>>num;
    for(i=0;i<num;i++){
        // for(j=1;j<=(num-i);j++){
        //     cout<<" ";
        // }
        for(j=0;j<=i;j++){
            cout<<nCr(i,j)<<"\t";
        }
        cout<<endl<<endl;
    }
    
    return 0;
}