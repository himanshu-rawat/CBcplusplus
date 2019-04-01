#include<iostream>
using namespace std;
int SimpleHCF(int a, int  b){
    int min;
    int ans=1;
    if(a>b){
        min=b;
    } 
    else{
        min=a;
    }
    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<arr[0];
        return 0;
    }
    int ans=1;
    ans = SimpleHCF(arr[0],arr[1]);
    if(n==2){
        cout<<ans;
        return 0;
    }

    for(int i=2;i<n;i++){
        ans= SimpleHCF(ans,arr[i]);
    }
    cout<<ans;
    return 0;
}