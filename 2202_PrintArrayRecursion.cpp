#include<iostream>
using namespace std;
// void print(int arr[],int n){
//     if(n==0){
//         cout<<arr[n]<<" ";
//         return ;
//     }
    
//     print(arr,n-1);
//     cout<<arr[n]<<" ";
// }
void print1(int arr[],int n){
    if(n==0){
        return;
    }
    // cout<<"n= "<<n <<" ";
    cout<<arr[n-1]<<" ";
    print1(arr,n-1);
    
}
int main(){
    int arr[]={1,2,3,4,5};
    //print(arr,5);
    cout<<endl;
    print1(arr,5);
    return 0;
}