#include<iostream>
using namespace std;
bool ObedientString(char ch[],int i){
    if(ch[i]=='\0'){
        return true;
    }
    if(ch[i]=='a'){
        if(ch[i+1]=='\0' || ch[i+1]=='a') { 
            ObedientString(ch,i+1);
            return true;
        }
        if( (ch[i+1]=='b' &&ch[i+2]=='b' ) ){
            ObedientString(ch,i+3);
            return true;
        }
    }
    else{
        return false;
    }

    if( ch[i+2]=='\0'|| ch[i+2]=='a'){
        ObedientString(ch,i+1);
         return true;
    }
    else{
        return false;
    }
    
}
int main(){
    char ch[100];
    cin>>ch;
    if(ObedientString(ch,0)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}