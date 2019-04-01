#include<iostream>
using namespace std;
int main(){

    // char ch[]={'a','b','c','d','e','\0'};
    // cout<<ch<<" size of ch[]= "<<sizeof(ch)<<endl;

    // char a[]={"hello"};
    // cout<<a<< " size of a[]= "<<sizeof(a)<<endl;

    // char  b[100];
    // cin.getline(b,100,'.');
    // cout<<b;
    char c;
    c=cin.get();

    while(c!='!'){
        cout<<c;
        c=cin.get();
    }
           
    return 0;
}