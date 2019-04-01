#include<iostream>
using namespace std;
void Add10Minus10(int arr[],int size,int i){
    if(i==size){
        return;
    }
    if(arr[i]%2==0){
        arr[i]=arr[i]-10;
    }
    else{
        arr[i]=arr[i]+10;
    }
    Add10Minus10(arr,size,i+1);
}
int main(){
    int arr[]={1,3,2,6,7,8};
    int n =sizeof(arr)/sizeof(int);
    Add10Minus10(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}