#include<iostream>
using namespace std;
int count=0;
int CountTwins(char ch[],int i){
    if(ch[i]=='\0'){
        return 0;
    }
    if( ch[i] == ch[i+2] ){
        count++;
        CountTwins(ch,i+1);
    }
    else{
        CountTwins(ch,i+1);
    }
    return count; 
    
    
   
}
int main(){
    char ch[100];
    cin>>ch;
    cout<<CountTwins(ch,0);
    return 0;
}