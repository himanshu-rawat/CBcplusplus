#include<iostream>
using namespace std;
int main(){

    int n,val=0;
    cin>>n;

    for(int line=1;line<=n;line++){
         for(int i=1;i<=line;i++){
              if(i%2==0){
                  cout<<val;
                  val=1;               
              }
              else{
                  val=1;
                 cout<<val;
              }
         }
         cout<<"\n";
    }
    
    return 0;
}