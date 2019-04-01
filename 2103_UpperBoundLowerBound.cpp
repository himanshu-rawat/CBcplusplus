#include<iostream>
using namespace std;
int  LowerBound(int arr[],int key,int n){
    int s=0,ans=-1;
    int e=n-1;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==key){
            ans=m;
            e=m-1;
        }
        else if(arr[m]>key){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return ans;
}
int UpperBound(int arr[],int key,int n){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
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
    // if(LowerBound(arr,key,n)== -1){
    //     cout<<"Key Not Found"<<endl;
    // }
    // else{
    //     cout<<"key found at "<<LowerBound(arr,key,n)<<endl;
    // }
    if(UpperBound(arr,key,n)== -1){
        cout<<"Key Not Found"<<endl;
    }
    else{
        cout<<"key found at "<<UpperBound(arr,key,n);
    }
    return 0;
}