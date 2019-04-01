#include<iostream>
using namespace std;
void check(int arr[],int n,int key){
    if(n==1){
        cout<<key<<" is not found"<<endl;
        return;
    }
    if(arr[n-1]==key){
        cout<<key<<" is found"<<endl;
    }
    else{
        check(arr+1,n-1,key);
    }
}
int index=0;
void AllIndex(int arr[],int n,int key){
    if(index==n){
       return; 
    }
    if(arr[index]==key){
        cout<<"Index of "<<key<<" Are "<<index<<endl;
        index++;
        AllIndex(arr,n,key);
    }
    else{
        index++;
        //cout<<"Index In Else "<<index<<endl;
        AllIndex(arr,n,key);
    }
}
int i=0,li=0;
int LastIndex(int arr[],int n,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        li=i;
        //cout<<"Last Index "<<i<<endl;
        i++;
        LastIndex(arr,n,key);
    }
    else{
        i++;
         LastIndex(arr,n,key);
    }
    return li;
}
int main(){
    int arr[]={1,3,7,6,3,7,7};
    int n=sizeof(arr)/sizeof(int);
    int key=3;
    cout<<LastIndex(arr,n,key);
    // check(arr,n,key);
    //AllIndex(arr,n,key);
    return 0;
}