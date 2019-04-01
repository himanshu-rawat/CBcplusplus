#include<iostream>
using namespace std;
void pattern(int n, int i){
    if(n==0){
        return;
    }
    pattern(n-1,i+1);
    for(int j=0;j<i;j++){
        cout<<"*\t";
    }
    cout<<endl;
    
}
int main(){
    int n;
    cin>>n;
    pattern(n,1);
    return 0;
}