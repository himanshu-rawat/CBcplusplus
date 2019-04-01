#include<iostream>
using namespace std;
int main(){

    char ch[100];
    cin>>ch;
    for(int i=0;ch[i]!='\0';i++){
        ch[i]=' '^ch[i];
        cout<<ch[i];
    }
    return 0;
}