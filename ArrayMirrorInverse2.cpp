#include<iostream>
using namespace std;

int main(){
    int arr1[1000],arr2[1000];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(i=0;i<n;i++){
        if(arr1[arr1[i]]!=arr2[arr2[i]]){
            break;
        }
    }
    if(i==n){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}