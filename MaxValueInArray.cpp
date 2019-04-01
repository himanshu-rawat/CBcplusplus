#include<iostream>
using namespace std;
int main(){

    int arr[100];
    int n,i,sum;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum=arr[0];
    for(int i=0;i<n;i++){
        if(sum<arr[i]){
            sum = arr[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}