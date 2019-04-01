#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key,int start,int end){
    if(start>end){
        return -1;
    }
    int mid= (start+end)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        end=mid-1;
        BinarySearch(arr,n,key,start,end);
    }
    else{
        start=mid+1;
        BinarySearch(arr,n,key,start,end);
    }
}
int main(){
    int arr[]={1,3,5,7,9};
    int n=sizeof(arr)/sizeof(int);
    int key=2;
    int start=0;
    int end = n-1;
    cout<<BinarySearch(arr,n,key,start,end);
    return 0;
}