#include<iostream>
using namespace std;
int main(){
    int n1,n2,loop,val;
    cin>>n1>>n2;
    loop=1;
    while(loop<=n1){

        val=3*loop+2;
        if(val%n2==0){
            loop=loop+1;
            n2=n2+1;
        }
        cout<<val<<endl;
        loop++;
    }
 
    return 0;
}

