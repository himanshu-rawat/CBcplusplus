#include<iostream>
using namespace std;
int fiboo(int n){
    if(n==0|| n==1){
        return n;
    }
    int val = fiboo(n-1)+fiboo(n-2);
    return val;
}
int main(){
    int n;
    cin>>n;
    cout<<fiboo(n);
    
    return 0;
}