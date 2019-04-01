#include<iostream>
using namespace std;
void ReplaceThemAll(int n){
    if(n==0){
        //cout<<5;
        return;
    }
    ReplaceThemAll(n/10);
    int val=n%10;
    if(val==0){
        val=5;
    }
    cout<<val;
}
int main(){
    int n;
    cin>>n;
    if(n){
        ReplaceThemAll(n);
    }
    else{
        cout<<5;
    }
    return 0;
}