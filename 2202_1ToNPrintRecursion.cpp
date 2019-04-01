#include<iostream>
using namespace std;
void Print(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    Print(n-1);
}
void output(int n, int count){
    if(count==n+1){
        return;
    }
    output(n,count+1);
    cout<<count<<" ";
    
}

int main(){
    int n;
    cin>>n;
   int  count=1;
   // Print(n); 
   output(n,count);   
    return 0;
}