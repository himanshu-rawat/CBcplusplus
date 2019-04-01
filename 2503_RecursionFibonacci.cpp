#include<iostream>
using namespace std;
int RecursionFiboo(int n){
    if(n==0 || n==1){
        return n;
    }
    return RecursionFiboo(n-1)+ RecursionFiboo(n-2);
}
int main(){
    int n;
    cin>>n;
    int Val=RecursionFiboo(n);
    cout<<"Sum Of Fibonacci "<<Val<<endl;
    return 0;
}