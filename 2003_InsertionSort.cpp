#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
    int temp;
    int j;
    for(int i=1;i<n;i++){
        temp=arr[i];
        for(j=i-1;j>=0 && arr[j]>temp;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;   
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    InsertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}