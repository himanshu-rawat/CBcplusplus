#include<iostream>
#include<algorithm>
using namespace std;
int Unique(int arr[],int n){
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
    int ans=0;
    int p=1;
    for(int i=0;i<n;i++){
        count[i]=count[i]%3;
        ans=ans+count[i]*p;
        p=p*2;
    }
    return ans;
}
void IsUnique(int arr[],int n,int i){
    //base case
    if(i==n){
        return;
    }
    if(arr[i]==arr[i+1]){
        IsUnique(arr,n,i+2);
    }
    else{
        cout<<arr[i]<<endl;
        IsUnique(arr,n,i+1);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n); 
    IsUnique(arr,n,0);
    
    //cout<<Unique(arr,n);
    return 0;

}