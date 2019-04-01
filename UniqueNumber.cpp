#include<iostream>
using namespace std;
int main(){

    int arr[100000],n,val=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        val= arr[i]^val;
        
    }
    cout<<val<<endl;   
    return 0;
}