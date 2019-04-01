#include<iostream>
#include<algorithm> 
using namespace std;
int Compare(int a,int b){
    return a>b;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}