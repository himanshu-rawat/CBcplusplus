#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    int val;
    val=fibonacci(n-1)+fibonacci(n-2);
    return val;
}
int main(){  

    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}