#include<iostream>
using namespace std;
int LastIndex(int arr[],int size,int key){
    if(size==0){
        return -1;
    }
    if(arr[size-1]==key){
        return (size-1);
    }
    else{
        
        LastIndex(arr,size-1,key);
    }

}
int main(){

    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<LastIndex(arr,n,key);
    return 0;
}