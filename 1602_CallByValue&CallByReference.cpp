//CallByValue, CallByReference and CallByAddress
#include<iostream>
using namespace std;

void fun(int a, int b){
    int temp =a;
    a=b;
    b=temp;
    cout<<"in fun()"<<endl;
    cout<<a<<" "<<b<<endl;
}
void fun1(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
    cout<<"in fun1()"<<endl;
    cout<<a<<" "<<b<<endl;
}
void CallByReference(int &x, int &y){
    cout<<x<<" "<<y<<endl;
    cout<<&x<<" "<<&y<<endl;
}
void CallByAddress(int *x, int *y){
    //cout<<x<<" "<<y<<endl;
    //cout<<&x<<" "<<&y<<endl;
    cout<<*x<<" "<<*y<<endl;
    int temp =*x;
    *x= *y;
    *y= temp;
}

int main(){

    int a=10, b=20;
     cout<<a <<" "<<b<<endl;
    CallByAddress(&a,&b);
    cout<<a <<" "<<b<<endl;
    //cout<<&a <<" "<<&b<<endl;
    //CallByReference(a,b);
    // fun(a,b);
    // fun1(a,b);
    // cout<<"in main() "<<endl;
    // cout<<a <<" "<<b;
    // int a=100;
    // int &b=a;
    // int &c =b;

    // c++;
    // ++b;
    // ++a;
    // cout<<a<<" "<<b<<" "<<c<<endl;
    // cout<<" &a ="<<&a<<" &b ="<<&b<<" &c="<<&c<<endl;
    
    
    return 0;
}