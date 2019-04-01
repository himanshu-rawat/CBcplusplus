#include<iostream>
using namespace std;
float squareRoot(int no,int p){
    int start=0;
    int end=no;
    float ans;
    int mid;
    while(start<=end){
        mid=(start+end)/2;

        if(mid*mid==no){
            ans=mid;
            break;
        }
        if(mid*mid<no){
            start=mid+1;
            ans=mid;
        }
        else{
            end=mid-1;
        }
    }
    float inc=0.1;
    for(int i=0;i<p;i++){
        while(ans*ans<=no){
            ans=ans+inc;
        }
        ans=ans-inc;
        inc=inc/10; 
    }
    // cout<<"ans = "<<ans<<endl;
    return ans;
}
int main(){
    cout<<squareRoot(10,3)<<endl;
    cout<<squareRoot(17,7)<<endl;
    return 0;
}