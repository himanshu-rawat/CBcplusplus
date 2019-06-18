#include<iostream>
using namespace std;
// void BubbleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
void BubbleSort(int arr[],int n){
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    BubbleSort(arr,n-1);
}
void BubbleSortRecursive(int arr[],int n, int j){
    if(n==1){
        return;
    }
    if(j==n-1){
        return BubbleSortRecursive(arr,n-1,0);
    }
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
    BubbleSortRecursive(arr,n,j+1);
}
int main(){
    int n;
    cin>> n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    BubbleSortRecursive(arr,n,0);
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }

}