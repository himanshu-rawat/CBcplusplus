#include<iostream>
using namespace std;

void Reverse(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}
int main(){

    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Reverse(arr,n);
    
    return 0;
}