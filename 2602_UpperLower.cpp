#include<iostream>
using namespace std;
void UpperLower(char ch[],int i){
    if(ch[i]=='\0'){
        return;
    }
    ch[i]=ch[i]^' ';
    cout<<ch[i];
    UpperLower(ch,i+1);
}
int main(){
    char ch[100];
    cin>>ch;
    UpperLower(ch,0);
    
    return 0;
}