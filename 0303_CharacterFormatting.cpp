#include<iostream>
using namespace std;
void InsertStar(char ch[],int i){
    if(ch[i]=='\0'){
        return;
    }
    if(ch[i]==ch[i+1]){
        cout<<ch[i]<<"*"<<ch[i+1];
        InsertStar(ch,i+2);
    }
    else{
        cout<<ch[i];
        InsertStar(ch,i+1);
    }
}
int main(){
    char ch[100];
    cin>>ch;
    InsertStar(ch,0);
    return 0;
}