#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n,i,key;
    cout<<"Enter The Number Of Elements:-"<<endl;
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Key to be search:-"<<endl;
    cin>>key;

    for(i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Found The "<<key<<" At Index = "<<i;
            break;
        }
    }
    if(i==n){
        cout<<"The Key Not Found "<<endl;
    }

    
    return 0;
}