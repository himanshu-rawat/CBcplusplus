#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[100];
    cin>>ch;
    int size=strlen(ch);
    int arr[100] ={0};
    //cout<<size;

    for(int i=0;i<size-1;i++){
        arr[i]=ch[i+1]-ch[i];
    }
    int index=0;
    for(int i=0;i<size-1;i++){
        cout<<ch[i]<<arr[i];

    }
    cout<<ch[size-1];
  //  cout<<'\b'<<'\b';
    
    return 0;
}