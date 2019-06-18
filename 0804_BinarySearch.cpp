#include<iostream>
using namespace std;
int BinarySearch(int arr[],int key, int start, int end){
    if(start>=end){
        return -1;
    }
    int mid=(start+end)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        start=mid+1;
        BinarySearch(arr,key,start,end);
    }
    if(arr[mid]>key){
        end=mid-1;
        BinarySearch(arr,key,start,end);
    }
}
int main(){
    int n;
    cin>> n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int start=0;
    int end= n;
    cout<<BinarySearch(arr,key,start,end);
    return 0;
}