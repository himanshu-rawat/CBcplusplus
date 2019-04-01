#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n,i,j;
    cin>>n;
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    // Insertion Sort;
    for(i=1;i<n;i++){
        int val=arr[i];
        for(j=i-1;j>=0 && val<arr[j];j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=val;
    }
    for( i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}