#include<iostream>
using namespace std;
int isSorted(int arr[],int n){

    if(n==1){
        return 1;
    }
    if(arr[0]<arr[1] && isSorted(arr+1,n-1) ){
        return 1;
    }
    return 0;

}
int main(){
    int arr[]={1,3,5,7,9};
    int n=5;
    bool value;
    value=isSorted(arr,n);
    cout<<value;
    return 0; 
}