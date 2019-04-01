#include<iostream>
using namespace std;

int StairCase(int n,int k=3){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        sum = sum+StairCase(n-i,k);
        return sum;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<StairCase(n);
    return 0;
}