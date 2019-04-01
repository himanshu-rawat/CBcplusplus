#include<iostream>
using namespace std;
int Sum(int n){
    if(n==0){
        return 0;
    }
    int val= n%10;
    return val+Sum(n/10);
    
}
int main(){
    int n;
    cin>>n;
    cout<<Sum(n);
    
    return 0;
}