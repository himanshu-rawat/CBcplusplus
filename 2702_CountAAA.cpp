#include<iostream>
#include<cstring>
using namespace std;
int count=0;
int CountAAA(char ch[],int i){
    if(ch[i]=='\0'){
        return 0;
    }
    //Recursive Case
    if(ch[i]=='a' && ch[i+1]=='a' && ch[i+2]=='a'){
        count++;
        CountAAA(ch,i+1);
    }
    else{
      CountAAA(ch,i+1);  
    }
    return count;
}
int update;
int CountOnly(char ch[],int i){
    if(ch[i]=='\0'){
        return 0;
    }
    //Recursive Case
    if(ch[i]=='a' && ch[i+1]=='a' && ch[i+2]=='a'){
        update++;
        CountOnly(ch,i+3);
    }
    else{
       CountOnly(ch,i+1); 
    }
    return update;
}
int main(){
    char ch[100];
    cin>>ch;
    cout<<CountAAA(ch,0)<<endl;
    cout<<CountOnly(ch,0);
    return 0;
}