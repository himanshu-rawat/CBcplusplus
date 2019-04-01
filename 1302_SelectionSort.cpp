#include<iostream>
using namespace std;
int main(){

    //Selection Sort :- Compare Each Element-index  Then Swap .
    int n,arr[100];
    cout<<"Enter the number of elements:- "<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }             
    cout<<"Before Sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // Understand It Carefully.
    for(int i=0;i<n-1;i++){
        int minIndex=i;  // i =0,1,2,3,4;
        for(int j=i+1;j<n;j++){   //j=i+1 to less than n
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            int temp = arr[minIndex];
            arr[minIndex]=arr[i];
            arr[i]=temp;
        }
    }

    cout<<"\nAfter Sorting: "<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    
    return 0;
}