#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int start,end,mid;
    start=0;
    end=n-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
	return -1;
}
int main(){
    int arr[100];
    int n,key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;    
    cout<<BinarySearch(arr,n,key);
    return 0;
}