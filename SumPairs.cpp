#include<iostream>
using namespace std;
void SumPair(int arr[],int n, int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                if(arr[i]>arr[j]){
                    cout<<arr[j]<<" and "<<arr[i]<<endl;
                }
                else{
                    cout<<arr[i]<<" and "<<arr[j]<<endl;
                }
                
            }
        }
    }
}
int main(){
    int arr[1000];
    int n,target;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>target;
    SumPair(arr,n,target);
    return 0;
}