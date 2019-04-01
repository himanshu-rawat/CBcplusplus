#include<iostream>
using namespace std;
int main(){
    
    int arr[100];
    int n,max;
    cout<<"Enter The Number Of Elements:-"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=1;i<n;i++){

        if(max<arr[i]){
            max=arr[i];
        }
        //cout<<max<<" ";
    }
    cout<<"The Maximum Among The Entered Array's Number Is:- "<<max<<endl;
    return 0;
}