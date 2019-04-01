#include<iostream>
using namespace std;
int main(){

    int n,arr[100],key,i;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Key To Search : "<<endl;
    cin>>key;

    for(i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Key Found at  Index "<<i<<endl;
            break;
        }
    }
    if(i==n){
        cout<<" Key Not Found ";
    }
    
    return 0;
}