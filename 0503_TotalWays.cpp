#include<iostream>
using namespace std;
int TotalWays(int m,int n){
    if(m==0 && n==0){
        return 1;
    }
    if(m<0 || n<0){
        return 0;
    }

    return TotalWays(m-1,n)+TotalWays(m,n-1);
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<TotalWays(m,n);
    return 0;
} 

