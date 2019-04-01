#include<iostream>
using namespace std;
int HulkSteps(int steps){
    int count=0;
    while(steps){
        if(steps&1==1){
            count++;
        }
        steps=steps>>1; 
    }
    return count; 
}
int main(){
    int n;
    cin>>n;
    int arr[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<HulkSteps(arr[i]);
        cout<<endl;
    }
    
    return 0;
}