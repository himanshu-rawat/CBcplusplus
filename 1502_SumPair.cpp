//Method 1
/*
#include<iostream>
using namespace std;
//
int main(){

    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    int s=6,var1,var2,i,j;
    // cout<<n; 
    for( i=0;i<n;i++){
        var1=arr[i];
        for( j=i+1;j<n;j++){

            var2=arr[j];
            if( ( var1+var2) == s ){
                cout<<"var1 and var2 = "<<var1<<" "<<var2<<endl;
            }

        }
    } 
    return 0;
}
*/
#include<iostream>
using namespace std;

void PrintPairs(int array[],int n,int key){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]+array[j]==key){
                cout<<array[i]<<" "<<array[j]<<endl;
            }
        }
    }
}
int main(){
    int arr[100];
    int n,key=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //cout<<"Enter The Key: "<<endl;
    cin>>key;
    PrintPairs(arr,n,key);
    return 0; 
}