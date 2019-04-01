#include<iostream>
using namespace std;
void LinearSearch(int arr[],int n,int key,int i){
    if(i==n){
        cout<<"Key Not Found";
        return;
    }
    if(arr[i]==key){
        cout<<"Key Found";
        return;
    }
    else{
        LinearSearch(arr,n,key,i+1);
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
    cout<<"enter The key to seach "<<endl;
    cin>>key;
    LinearSearch(arr,n,key,0);
    return 0;
}