#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==1){
        return true;
    }
    int val = arr[0]<arr[1] && isSorted(arr+1,size-1);
    return val;
}
int main(){

    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    if(isSorted(arr,n)){
        cout<<"true";
    } 
    else{
        cout<<"false";
    }
    return 0;
}
