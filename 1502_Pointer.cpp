//AddressOfOperator
#include<iostream>
using namespace std;
int main(){
    int d=1;
    cout<<&d<<endl;
    cout<<*(&d)<<endl; //Here it is ,  Deferencing to d value. 
    // //d= &d+1;

    int a=10;
    int *aptr=&a;    // *aptr= &a is wrong.      

    // //cout<<&d<<endl;
    // int *dptr=&d;
    // //dptr=1234; 
    // *dptr=6;
    // cout<<d<<endl;
    // cout<<dptr<<endl;
    // cout<<" *dptr "<<*dptr<<endl;
    // cout<<" &dptr "<<&dptr<<endl;
    // char ch='B';
    // char *chPtr=&ch;
    // cout<<(void *)chPtr<<endl;
    // cout<<(int  *)chPtr<<endl;
    // cout<<(float *)chPtr<<endl;
    
    return 0;
}