#include<iostream>
using namespace std;
//Binary Search 
void BinarySearch(int arr[],int key,int n){
    int start=0;
    int end=n-1; 
    int mid;
    while(start<=end){
        mid =(start+end)/2;
        if(key==arr[mid]){
            cout<<"Key Found";
            break;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
    }
    if(start>end){
        cout<<"Key Not Found";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=00;i<n;i++){
        cin>>arr[i];
    }
    for(int i=00;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter Key"<<endl;
    int key;
    cin>>key;
    // cout<<"Key = "<<key<<endl;
    BinarySearch(arr,key,n);
    return 0;
}