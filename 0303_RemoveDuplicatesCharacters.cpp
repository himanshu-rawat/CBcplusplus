#include<iostream>
using namespace std;
void RemoveDuplicate(char ch[],int i){
    if(ch[i]=='\0'){
        return;
    }
    if(ch[i]==ch[i+1]){
        RemoveDuplicate(ch,i+1);
    }
    else{
        cout<<ch[i]; 
        RemoveDuplicate(ch,i+1);
    }
}
int main(){
    char ch[100];
    cin>>ch;
    RemoveDuplicate(ch,0);
    return 0;
}