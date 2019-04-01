#include<iostream>
using namespace std;
int aOrb(int a, int b){
    if(a>b){
        return true;
    }
    else{
        return false;
    }  
}
void primeOrNot(int n){
    int i;
     for(i=2;i<n;i++){
         if(n%i==0){
             cout<<"Not Prime";
             break;
         }        
     }    
     if(i==n){
         cout<<"Prime Number";
     }
}
int main(){
bool value=aOrb(5,7);
if(value){
    cout<<"True"<<endl;
}
else{
    cout<<"False"<<endl;
}
primeOrNot(6);    
return 0;
}