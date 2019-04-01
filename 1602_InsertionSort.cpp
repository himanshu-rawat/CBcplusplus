#include<iostream>
using namespace std;

void InsertionSortInc(int arr[],int n){
   int j;
    for(int i=1;i<n;i++){
        int num=arr[i];
        for( j=i-1; j>=0 && arr[j]>num;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=num;
    }
    cout<<"Insertion Sort Increasing Order : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void InsertionSortDec(int arr[],int n){
   int j;
    for(int i=1;i<n;i++){
        int num=arr[i];
        for( j=i-1; j>=0 && arr[j]<num;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=num;
    }
    cout<<"\nInsertion Sort Decreasing Order : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
}

int main(){
    int n, arr[100];
    cout<<"Enter The Size of Array :"<<endl;
    cin>>n;
    cout<<"Enter Your Elements For Sorting :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    InsertionSortInc(arr,n);
    InsertionSortDec(arr,n); 
    return 0;
}