#include<iostream>
using namespace std;
int main(){

    int n,num,sum=0,i;
    cin>>n;
    
    for(i=n;i>0;i=i/10){

        num=i%10;
        sum=num+sum*10;
    }
    cout<<sum<<endl;
    cout<<"\nReverse + 10 = "<<sum+10;

    
    return 0;
}