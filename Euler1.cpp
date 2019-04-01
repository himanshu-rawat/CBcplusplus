#include<iostream>
using namespace std;
int main(){
    long long int a,b,c=0,i,sum=0;
    a=0;
    b=1;
    i=1;
    while(c<=4000000){
        
        c=a+b;
        if(c%2==0){
            sum=sum+c;
        }
        a=b;
        b=c;
        i++;
    }
    cout<<sum<<endl;


    return 0;
}