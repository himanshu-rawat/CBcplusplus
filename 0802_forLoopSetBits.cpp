#include<iostream>
using namespace std;
int main(){
    int n,i,val,count=0;
    cin>>n;
    for(i=n;i>0;i=i>>1){

        val=i&1;
        if(val==1){
            count++;
        }
    }
    cout<<count<<endl;                                                                       

    
    return 0;
}