#include<iostream>
using namespace std;
int main(){
    // Bubble Sort
    // int arr[]={4,3,5,1,2};
    // int n=5;
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]<arr[j+1]){
    //             int temp =arr[j];
    //             arr[j]= arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // Selection Sort
    //  int arr[]={4,3,5,1,2};
    // int n=5;
    // for(int i=0;i<n-1;i++){
    //     int minIndex=i;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[minIndex]<arr[j]){
    //             minIndex=j;
    //         }
    //     }
    //     int temp =arr[minIndex];
    //     arr[minIndex]=arr[i];
    //     arr[i]=temp;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //Insertion Sort
    int arr[]={5,4,3,2,1};
    int n=5,i,j;
    for(int i=1;i<n;i++){
        int num=arr[i];
        for( j=i-1;j>=0 && arr[j]>num;j--){
            arr[j+1]=arr[j];
            // cout<<"Inside J's Loop : ";
            // for(int i=0;i<n;i++){
            // cout<<arr[i]<<" "; 
            // } 
            // cout<<endl;
             

        }
        arr[j+1]=num;
        // cout<<"After "<<i<<" th iteration ";
        // for(int i=0;i<n;i++){
        // cout<<arr[i]<<" "; 
        // } 
        // cout<<endl;
    }   
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }

    5>4?cout<<"Five" :cout<<"Four";
    
    return 0;
}