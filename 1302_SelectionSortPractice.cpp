#include<iostream>
using namespace std;
int main(){

    int arr[]={5,4,3,2,1};
    int n=5,i,j;

    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
        
        //cout<<endl;
    }
    cout<<"\nFinal Sort"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}