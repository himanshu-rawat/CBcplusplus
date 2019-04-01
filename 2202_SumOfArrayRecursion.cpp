#include<iostream>
using namespace std;
int sumOfArray(int arr[],int n){
    if(n==0){
        return 0;
    }
    int val= arr[0]+sumOfArray(arr+1,n-1);
    return val;
}
int main(){

    int arr[]={1,2,3,4,5,6,7};
    cout<<sumOfArray(arr,7);
    
    return 0;
}