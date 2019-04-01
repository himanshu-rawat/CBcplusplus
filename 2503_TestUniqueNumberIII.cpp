#include<iostream>
using namespace std;
void UniqueNumber(int arr[],int n){
    int count[64]={0};
    for(int j=0;j<n;j++){
        int n=arr[j];
        int i=0;
        while(n){
            count[i]=count[i]+(n&1);
            i++;
            n=n>>1; 
        }
    }
    // for(int i=0;i<64;i++){
    //     cout<<count[i]<<" ";
    // }
    int ans=0;
    int p=1;
    for(int i=0;i<n;i++){
        count[i]=count[i]%3;
        ans=ans+count[i]*p;
        p=p*2;
    }
    cout<<ans;
}
int main(){
    int n;
    cin>>n;
    int arr[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    UniqueNumber(arr,n);
    return 0;
}