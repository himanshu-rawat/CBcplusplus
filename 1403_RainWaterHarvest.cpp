#include<iostream>
using namespace std;
int minimum(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a; 
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    int left[100],right[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=-1;
    int r=-1;
    /// Left Building
    for(int i=0;i<n;i++){
        if(arr[i]>=l){
            left[i]=arr[i];
            l=arr[i];
        }
        else{
            left[i]=l;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<left[i]<<" ";
    // }
    // Right Building
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=r){
            right[i]=arr[i];
            r=arr[i];
        }
        
        else{
            right[i]=r;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<right[i]<<" ";
    // }
    int ans=0;
    for(int i=0;i<n;i++){
        
        int min = minimum(left[i],right[i]);
        ans=ans+min-arr[i];
    } 
    //cout<<endl<<"Total Water Store "<<ans<<endl;    
    cout<<ans;
                      
    return 0; 
}