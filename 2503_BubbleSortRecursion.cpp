#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n,int i){
    // Base Case
    if(i==n-1){
        return;
    }
    else{
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        BubbleSort(arr,n,i+1);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}