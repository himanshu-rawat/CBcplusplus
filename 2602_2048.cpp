#include<iostream>
using namespace std;
void PrintStringRev(int n){
    char number[][100]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0){
        return;
    }
    cout<<number[n%10]<<" ";
    PrintStringRev(n/10);
}
void PrintString(int n){
    char number[][100]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0){
        return;
    }
    PrintString(n/10);
    cout<<number[n%10]<<" ";
}
int main(){
    int n;
    cin>>n;
    PrintStringRev(n);
    cout<<endl;
    PrintString(n);
    return 0;
}