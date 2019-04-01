#include<iostream>
using namespace std;
int main(){

    int n,num,val=0;
    cin>>n;
    while(n>0){
        cin>>num;

        val=val^num;

        n--;
    }
    cout<<"Unique is ="<<val<<endl;  
    
    return 0;
}