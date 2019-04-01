#include<iostream>
using namespace std;

int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
void nCr(int n, int r){
    int ncr;
    ncr = factorial(n) / ( factorial(r)*factorial(n-r) );
    cout<<"The Value of nCr is = "<<ncr<<endl;  
}

int main(){

    int n,r;
    cout<<"Enter The Value of N and R : ";
    cin>>n>>r;
    nCr(n,r);
    return 0;
}