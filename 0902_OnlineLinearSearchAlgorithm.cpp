#include<iostream>
using namespace std;
int main(){

    int arr[10];
    int n,i;
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Element to be Seach \n";
    int key;
    cin>>key;

    for(i=0;i<n;i++){
        if(key==arr[i] ){
            cout<<"Found At Index :"<<i<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Element Not Found";
    }
    
    return 0;
}