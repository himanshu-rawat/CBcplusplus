#include<iostream>
using namespace std;
int main(){

    int a=1,sum=0;
    while(a<1000){
        
        if(a%3== 0 && a%5==0){
            sum=sum+a;
        }
        else if(a%3==0){
            sum=sum+a;
        }
        else if(a%5==0){
            sum=sum+a;
        }
        
        a++;
    }
    cout<<sum<<endl;
    return 0;
}