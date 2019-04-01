#include<iostream>
using namespace std;
int BubbleSort(int arr[],int n,int i){
    // if(i==n){
    //     return -1;
    // }

    // if(arr[i]>arr[i+1]){
    //     swap(arr[i],arr[i+1]);
    //     i++;
    // }
    // else{
    //     i++;
    //     BubbleSort(arr+1,n-1,i);
    // }

    // for(int i=0;i<n;i++){
    //     int num=arr[i];
    //     for(int j=i+1;j<n;i++){
    //         if(num>arr[j]){
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }
}
int main(){

    int arr[]={9,7,5,3,1};
    int n=sizeof(arr)/sizeof(int);
    cout<<BubbleSort(arr,n,0);
    return 0;
}