#include<iostream>
using namespace std;
int countHi=0;
int Count(char ch[],int i){
    if(ch[i]=='\0'){
        return 0;
    }
    if(ch[i]=='h' && ch[i+1]=='i'){
        countHi++;
    }
    Count(ch,i+1);
    return countHi;
}
void Remove(char ch[],int i){
    if(ch[i]=='\0'){
        return;
    }
    if(ch[i]=='h' && ch[i+1]=='i'){
         Remove(ch,i+2);
    }
    else{
     cout<<ch[i];
     Remove(ch,i+1);   
    }
    
}
void Replace(char ch[],int i){
    if(ch[i]=='\0'){
        return;
    }
    if(ch[i]=='h' && ch[i+1]=='i'){
        cout<<"bye";
        Replace(ch,i+2);
    }
    else{
        cout<<ch[i];
        Replace(ch,i+1);
    }
}
int main(){
    char ch[100];
    cin>>ch;
    cout<<Count(ch,0)<<endl;
    Remove(ch,0);
    cout<<endl;
    Replace(ch,0);
    return 0;
}