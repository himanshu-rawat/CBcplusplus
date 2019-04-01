// Write a function to check if it is palindrome or not a string
#include<iostream>
using namespace std;
int LengthOfString(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;    
    }
    return count;
}
void Reverse(char ch[]){
    int length=LengthOfString(ch);
    int length1=LengthOfString(ch);
    int i=0;
    length=length-1;
    while(i<length){
        swap(ch[i],ch[length]);
        i++;
        length--;
    }
    // for(int i=0;i<=length1;i++){
    //     cout<<ch[i];
    // }

}
int main(){
    char ch[1000],store[1000];
    cin>>ch;
    for(int i=0;ch[i]!='\0';i++){
        store[i]=ch[i];
    }
   Reverse(ch);
   int flag=1;
   for(int i=0;ch[i]!='\0';i++){
        if(ch[i]!=store[i]){
            flag=0;
            break;
        }
        else{
            flag=1;
        }
    }
    if(flag){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}