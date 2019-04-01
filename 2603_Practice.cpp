#include<iostream>
using namespace std;
int FirstIndex(int arr[],int n,int m){
    if(n<0){
        return -1;
    }
    if(arr[n-1]==m){
        return n-1;
    }
    else{
        FirstIndex(arr,n-1,m);
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    cout<<FirstIndex(arr,n,m)<<endl;
    return 0;
}