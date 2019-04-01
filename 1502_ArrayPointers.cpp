//AddressOfOperator
#include<iostream>
using namespace std;

void print(int *parr,int n){
    for(int i=0;i<n;i++){
        cout<<parr[i]<<" "<<*(parr+i)<<endl; //parr[i] is equivalent to *(parr+i);
    }
}
int main(){
    // int d=1;
    // int *dptr=&d;
    // char ch='B';
    // char *chPtr=&ch;
    // cout<<chPtr;

    int arr[]={1,2,3,4,5};
    int n=5;
    print(arr,n);
    
    return 0;
}