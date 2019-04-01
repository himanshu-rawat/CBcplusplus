#include<iostream>
#include<cstring>
using namespace std;
int CheckPalindrome(char ch[],int i,int size){
    if(ch[i]=='\0'){
        return 1;
    }
    if(ch[i]==ch[size-1]){
        CheckPalindrome(ch,i+1,size-1);
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char ch[100];
    cin>>ch;
    int size= strlen(ch);
    //cout<<size<<endl;
    if( CheckPalindrome(ch,0,size) ){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}