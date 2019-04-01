#include<iostream>
using namespace std;
// int BinarySearch(int arr[],int n,int key){
//     int start,end,mid;
//     start=0;
//     end=n-1;
//     while(start<=end){
//         mid=(start+end)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(arr[mid]<key){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }     
//     }
//     return -1;
// }
int BinarySearch(int arr[],int n,int key,int start,int end){
    if(start>end){
        return -1;
    }
    int mid=(start+mid)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]==key){
        return mid;
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
    cout<<BinarySearch(arr,n,key,0,n-1);
    return 0;
}