#include<iostream>
using namespace std;
int main(){
    int arr[100],b[100];
    int n,i;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(i!=arr[ arr[i]] ){
            break;
        }
    }
    if(i==n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}