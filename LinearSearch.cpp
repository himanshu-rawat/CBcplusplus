#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key){
     int i; 
     for(i=0;i<n;i++){
         if(arr[i]==key){
             return i;
         }
     }
     if(i==n){
         return -1;
     }
}
int main(){

     int arr[1000];
     int n,key,i;
     cin>>n;
     for(int i=0;i<n;i++){
         cin>>arr[i];
    }
     cin>>key;
     cout<<LinearSearch(arr,n,key);
    return 0;
}