/*Take as input N, the size of array.
Take N more inputs and store that in an array. 
Take as input M, a number.
Write a recursive function which returns the first index at 
which M is found in the array and -1 if M is not found anywhere. Print the value returned.*/
#include<iostream>
using namespace std;
int count=0;
int firstIndex(int arr[],int size,int key){
    if(size==0){
        //cout<<"Base Case ";
        return -1;
    }
    //cout<<size<<" ";

    if(arr[0]==key){
        //cout<<"Found ";
        return count;
    }
    else{
        count++;
        firstIndex(arr+1,size-1,key);
    }    
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    cout<<firstIndex(arr,n,m);
    return 0;
}