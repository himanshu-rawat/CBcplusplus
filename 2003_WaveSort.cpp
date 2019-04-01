#include<iostream>
#include<algorithm>
using namespace std;
void WaveSort(int arr[],int n,int i){
    if(i==n){
        return;
    }
    if(arr[i]<arr[i+1]){

        swap(arr[i],arr[i+1]);
        WaveSort(arr,n,i+2);
    }
    else{
        WaveSort(arr,n,i+2);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    WaveSort(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}