#include<iostream>
using namespace std;
bool Obedient(char ch[],int i){
    if(ch[i]=='\0'){
        return true;
    }
    if(ch[i]=='a'){
        if(ch[i+1]=='\0' || ch[i+1]=='a') { 
            Obedient(ch,i+1);
            return true;
        }
        if( (ch[i+1]=='b' &&ch[i+2]=='b' ) ){
            Obedient(ch,i+3);
            return true;
        }
    }
    if( ch[i]=='b' && ch[i+1]=='b' ){
        if(ch[i+2]=='\0'|| ch[i+2]=='a'){
            Obedient(ch,i+2);
            return true;
        }
    }
    return false;
}
int main(){
    char ch[100];
    cin>>ch;
    if(Obedient(ch,0)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}