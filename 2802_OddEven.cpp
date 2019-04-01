#include<iostream>
using namespace std;
void Odd(int n,int i){
    if(i>n){
        return;
    }
    if(i%2!=0){
        cout<<i<<" ";
    }
    Odd(n,i+1);
}
void Even(int n,int i){
    if(i>n){
        return;
    }
    if(i%2==0){
        cout<<i<<" ";
    }
    Even(n,i+1);
}
int main(){
    int n;
    cin>>n;
    Even(n,0);

    return 0;
}