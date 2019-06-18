#include <iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key, int i){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    LinearSearch(arr,n,key,i+1);
    
}
int main()
{   int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<LinearSearch(arr ,n,key,0);
    return 0;
}