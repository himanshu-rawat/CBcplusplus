#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){
    int i,j;
   for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]<arr[j]){
                minIndex=j;
            }
        }
        int temp =arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SelectionSort(arr,n);
    return 0;
}