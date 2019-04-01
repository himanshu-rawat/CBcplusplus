#include<iostream>
using namespace std;
int count=0;
void MoveX(char ch[],int i){
    if(ch[i]=='\0'){
        for(int i=0;i<count;i++){
            cout<<"x";
        }
        return;
    }
    if(ch[i]=='x'){
        count++;
        MoveX(ch,i+1);
    }
    else{
        cout<<ch[i];
        MoveX(ch,i+1);
    }
}
int main(){
    char ch[100];
    cin>>ch;
    MoveX(ch,0);
    return 0;
}