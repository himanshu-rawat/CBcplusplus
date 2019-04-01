#include<iostream>
using namespace std;
// char integer[]=[]
void StringToInteger(char ch[],int i){
    if(ch[i]=='\0'){
        return;
    }
    int num=ch[i]-'0';
    cout<<num;
    StringToInteger(ch,i+1);
}
int main(){
    char ch[100];
    cin>>ch;
    StringToInteger(ch,0);
    return 0;
}