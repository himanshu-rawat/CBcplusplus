#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int val = n+sum(n-1);
    return val;
}
int main(){

    cout<<sum(100);
    return 0;
}