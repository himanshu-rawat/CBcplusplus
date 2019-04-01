#include<iostream>
using namespace std;
int main(){

    int arr[100];
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // bubble sort : pair wise swap;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}