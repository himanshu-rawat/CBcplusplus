//1302_FunctionPrime
#include<iostream>
using namespace std;
void showPrime(int n){
    int store=n;
    int i,j;
    cout<<"Primes are : ";
    for(i=2;i<=n;i++){

        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<j<<" ";
        }
    }
}
int main(){

    int n;
    cout<<"Enter The Number Upto Which Find The Prime Number: "<<endl;
    cin>>n;

    showPrime(n);
    return 0;
}