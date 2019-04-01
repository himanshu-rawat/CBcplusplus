#include<iostream>
using namespace std;
int main(){

    char ch[]={'a','b','c','\0'};

    for(int i=0;i<10;i++){
        cout<<ch[i]<<" ";
    }
    
    return 0;
}