#include<iostream>
using namespace std;
int Triangle(int n){
    if(n==0){
        return 0;
    }
  
    int sum=n+Triangle(n-1);
    return sum;
}
int main(){
    
    int n;
    cin>>n;
    cout<<Triangle(n);
    
    return 0;
}