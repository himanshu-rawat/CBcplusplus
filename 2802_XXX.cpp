#include<iostream>
using namespace std;
void AppendXXX(char ch[],int i,int &count){
    if(ch[i]=='\0'){
            for(int i=0;i<count;i++){
            cout<<"x";
            } 
        return;
    }
    if(ch[i]=='x'){
        count++;
        AppendXXX(ch,i+1,count);
    }
    else{
        cout<<ch[i];
        AppendXXX(ch,i+1,count);
    }
}
int main(){
    char ch[]="abcxdexxxhjk";
    int count=0;
    AppendXXX(ch,0,count);
    return 0;
}