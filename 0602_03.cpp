/*
first we count the number of digits enter by user
then we initalize count =1 to n;

then we take digit from n from last and print in the required format
*/
#include<iostream>
using namespace std;
int main(){
    int n,count,num,line,ans,rem;
    cin>>n;
    count=0;
    num=n;
    while(num>0){
        count++;
        num=num/10;
    }
    line=1;
    ans=0;
    while(line<=count){
        rem=n%10;
        ans=ans*10+rem;
        n=n/10;
        cout<<ans;
        cout<<"\n";
        
        line++;
    }
    return 0;
}