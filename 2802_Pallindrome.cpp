#include<iostream>
#include<cstring>
using namespace std;
int  Pallindrome(char ch[],int i, int j){
    if(i>=j){
        return 0;
    }
    if(ch[i]==ch[j-1]){
        Pallindrome(ch,i+1,j-1);
        return 1;
    }
    else{
        return -1;
    }
}
int main(){
    char ch[100];
    cin>>ch;
    int length=strlen(ch);
    //cout<<length;
    cout<<Pallindrome(ch,0,length);
    return 0;
}