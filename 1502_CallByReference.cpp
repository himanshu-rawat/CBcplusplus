#include<iostream>
using namespace std;
void fun(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
    cout<<*a<<" "<<*b<<endl;
}
int main(){

    int a=10,b=20;
    fun(&a,&b);
    cout<<"in main: "<<endl;
    cout<<a<<" "<<b<<endl;
    
    return 0;
}