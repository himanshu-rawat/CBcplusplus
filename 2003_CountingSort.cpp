#include<iostream>
using namespace std;
void CountingSort(int arr[],int n){
    int freq[1000]={0};
    for(int i=0;i<n;i++){
        freq[ arr[i] ]=freq[arr[i]]+1;
    }
    // for(int i=0;i<n;i++){
    //     cout<<freq[i]<<" ";
    // }
    // cout<<endl;
    // for(i=0;i<=max;++i)
    //   for(j=1;j<=count[i];++j)
    //    printf("%d ",i);
     int newArray[1000];
    for(int i=0;i<=6;i++){
        for(int j=1;j<=freq[i];j++){
            cout<<i<<" ";
        }
    }
    // int newArray[1000];
    // for(int i=0;i<n;i++){
    //     if(freq[i]!=0){
    //         newArray[i]=i;
    //     }   
    // }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    CountingSort(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

}