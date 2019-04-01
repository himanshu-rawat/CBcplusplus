#include<iostream>
using namespace std;
void Duplicate(char ch[],int i){
    if(ch[i]=='\0'){
        return;
    }
    if(ch[i]==ch[i+1]){
        cout<<ch[i]<<"*";
        Duplicate(ch,i+1);
    }
    else{
        cout<<ch[i];
        Duplicate(ch,i+1);
    }
}
int main(){
    char ch[100];
    cin>>ch;
    Duplicate(ch,0);
    return 0;
}