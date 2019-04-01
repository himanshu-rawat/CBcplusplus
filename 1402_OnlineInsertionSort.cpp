#include<iostream>
using namespace std;
int main(){

    int arr[]={5,4,3,2,1};
    int n=5,i,j;
    for(i=1;i<n;i++){
        int temp =arr[i];
        for( j=i-1;j>=0 && temp<arr[j] ; j-- ){
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
    cout<<"Sorted: "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}