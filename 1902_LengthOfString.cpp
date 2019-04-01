#include<iostream>
using namespace std;

void LengthOfString(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]!='\n'){
            count++;
        }
    }
    cout<<count<<endl;
    count--;
    int flag=1;
    for(int i=0;i<count;i++){
        if(ch[i]!=ch[count]){
            // cout<<ch<<" is NOT Palindrome"<<endl;
            flag=0;
            break;
        }
        else{
            count= count-1;
            flag=1;
        }
    }
    if(flag){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<" Not Palindrome"<<endl;
    }
}
int main(){

    char ch[100];
    cin.getline(ch,100,'\n');
    LengthOfString(ch);
    
    return 0;
}