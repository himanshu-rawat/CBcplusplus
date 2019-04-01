#include<iostream>
using namespace std;
int main(){

    int arr[]={5,1,2,3,4};
    int n=5,count=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                count++;
                swap(arr[j],arr[j+1]);
            }
        }
        if(count==0){
            break;
        }

        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        cout<<"\n";
        
    }
     cout<<"\nFinal Sort\n";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}