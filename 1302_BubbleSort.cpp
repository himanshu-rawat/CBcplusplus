#include<iostream>
using namespace std;
int main(){

    //Bubble Sort :- Pairwise Swap after checking;
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

    for(int i=0;i<n-1;i++){
         
         for(int j=0;j<n-1-i;j++){
             if(arr[j]>arr[j+1]){
                 int temp= arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1] =temp;
             }
         }
    }

     cout<<"\nAfter Sorting: "<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    
    return 0;
}