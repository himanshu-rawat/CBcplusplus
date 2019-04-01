#include<iostream>
using namespace std;
void Print(char ch[],int i){
    if(ch[i]=='\0'){
        return;
    }
    if(ch[i]=='('){
        for(int j=i+1;ch[j]!=')';j++){
            cout<<ch[j];
        }
    }
    Print(ch,i+1);
}
int main(){
    char ch[100];
    cin>>ch;
    Print(ch,0);
    return 0;
}