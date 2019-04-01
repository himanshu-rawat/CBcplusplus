#include<iostream>
using namespace std;
int sum=0;
int SumOfTheDigit(int n){
    if(n==0){
        return 0;
    }
    sum=sum+n%10;
    SumOfTheDigit(n/10);
    return sum;
}
int main(){
    int num;
    cin>>num;
    cout<<SumOfTheDigit(num);    
    return 0;
}