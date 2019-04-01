#include<iostream>
using namespace std;
void BinarySearch(int arr[],int s,int e,int key){
    if(s>e){
        cout<<"Not Found At Any Index"<<endl;
        return;
    }
    int mid=(s+e)/2;
    if(arr[mid]==key){
        cout<<"Found at Index at = "<<mid;
        return;
    }
    if(arr[mid]<key){
        s=mid+1;
        BinarySearch(arr,s,e,key);
    }
    else{
        e=mid-1;
        BinarySearch(arr,s,e,key);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter The Element To Search "<<endl;
    cin>>key;
    int s=0;
    int e=n-1;
    int m=(s+e)/2;
    BinarySearch(arr,s,e,key);

    return 0;
}