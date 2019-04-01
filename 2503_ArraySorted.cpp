#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if(n==1){
        return true;
    }
    return arr[0]<arr[1]&&isSorted(arr+1,n-1);

}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val=isSorted(arr,n);    
    cout<<val;
    return 0;
}
// #include<iostream>
// using namespace std;
// bool isSorted(int arr[],int size){
//     if(size==1){
//         return true;
//     }
//     int val = arr[0]<arr[1] && isSorted(arr+1,size-1);
//     return val;
// }
// int main(){

//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     } 
//     if(isSorted(arr,n)){
//         cout<<"true";
//     } 
//     else{
//         cout<<"false";
//     }
//     return 0;
// }
