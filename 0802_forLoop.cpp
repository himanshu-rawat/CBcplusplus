#include<iostream>
using namespace std;
int main(){

    int n,i,number;
    cin>>n;
    for(number=2;number<=n;number++){
         
         for(i=2;i<=number;i++){
             if(number%i==0){
                 break;
             }
         }
         if(number==i){
             cout<<number<<", ";
         }
    }
    cout<<"\b \b"<<"\b \b";// used to backspace  
    return 0;
}