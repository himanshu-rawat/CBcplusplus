#include<iostream>
using namespace std;
void Print(char ch[],int i){
    if(ch[i]=='\0'){
        return;
    }
    
    if(ch[i]=='('){
        int k;
        for(k=i;ch[k+1]!=')';k++){
            cout<<ch[k+1];
        }
        //Print(ch,k+1);
    }
    Print(ch,i+1);
}
int main(){
    char ch[100];
    cin>>ch;
    Print(ch,0);
    return 0;
}