#include<iostream>
using namespace std;
int main(){

    // cin

    // char ch;
    // cin>>ch;
    
    
    // while(ch!='!'){
    //     cout<<ch;
    //     cin>>ch;
    // }

    // cin.get
    char ch;
    ch=cin.get();

    while(ch!='!'){
        cout<<ch;
        ch=cin.get();
    }

    
    return 0;
}