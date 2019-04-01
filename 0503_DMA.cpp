#include<iostream>
using namespace std;
int main(){
    // int *a=new int ;
    // *a=10;
    // cout<<*a<<endl;
    // *a=100;
    // cout<<*a<<endl;
    // delete a;
    // a=NULL;
    // *a=12;
    // cout<<*a;
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete []arr;
    cout<<endl<<"After delete"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}