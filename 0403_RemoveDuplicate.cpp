#include<iostream>
using namespace std;
void RemoveDuplicate(char ch[],int i,char out[],int j){
    if(ch[i]=='\0'){
        out[j]='\0';
        return;
    }
    if(ch[i]==ch[i+1]){
        out[j]=ch[i];
        RemoveDuplicate(ch,i+2,out,j+1);
    }
    else{
        out[j]=ch[i];
        RemoveDuplicate(ch,i+1,out,j+1);
    }
}
int main(){
    char ch[1000],out[1000];
    cin>>ch;
    RemoveDuplicate(ch,0,out,0);
    cout<<out;
   
    return 0;
}