#include<iostream>
using namespace std;
int Multi(int a,int b){
    if(b==0){
        return 0;
    }
    int val=a+Multi(a,b-1);
    return val;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<Multi(a,b);
    
    return 0;
}