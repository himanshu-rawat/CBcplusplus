#include<iostream>
#include<math.h>
using namespace std;


//// Selection Sort....
void selectionsort(int arr[],int val){

    for(int i=0;i<val-1;i++){
        // assume the current is min
        int minIndex=i;
        for(int j=i+1; j<val; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }

}

int main(){

    int a[]={5,4,1,2,3};
    int n=5;
    selectionsort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}  

// // Bubble Sort
// #include<iostream>
// using namespace std;
// int main(){

//     int arraySize;
//     cin>>arraySize;
//     int arr[arraySize];
//     cout<<"enter the values of array: \n";
//     for(int i=0;i<arraySize;i++){
//         cin>>arr[i];
//     }
//     cout<<" The array after the sorting: ";
//     for(int i=0;i<5;i++){
//          for(int j=0;j<=5-1-i;j++){
//              if(arr[j]>arr[j+1]){
//                  swap(arr[j],arr[j+1]);
//              }
//          }
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }


    
//     return 0;
// }
