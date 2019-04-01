#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    // Base Case
    if(n==0){
        return 1;
    }
    // Recursive Case
    int val =   arr[n-1]>arr[n-2] &&isSorted(arr,n-1);
    return val;
    
}
int main(){
    int arr[]={3,5,6,9,10,11};
    cout<<isSorted(arr,6);
    return 0;
}