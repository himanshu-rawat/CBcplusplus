#include<iostream>
using namespace std;
// void ReplacePi(char ch[],int i){
//     if(ch[i]=='\0'){
//         return;
//     }
//     if(ch[i]=='p' && ch[i+1]=='i'){
//         cout<<"3.14";
//          ReplacePi(ch,i+2);
//     }
    
//     else{
//         cout<<ch[i];
//         ReplacePi(ch,i+1);
//     }
    
// }
void ReplacePi(char ch[],int i,char newch[],int j){
    if(ch[i]=='\0'){
        newch[j]='\0'; 
        return;
    }
    if(ch[i]=='p' && ch[i+1]=='i'){
         newch[j]='3';
         newch[j+1]='.';
         newch[j+2]='1';
         newch[j+3]='4';
         ReplacePi(ch,i+2,newch,j+4);
    }
    
    else{
        newch[j]=ch[i];
        ReplacePi(ch,i+1,newch,j+1);
    }
    
}

int main(){

    char ch[100],newch[100];
    cin>>ch;
    ReplacePi(ch,0,newch,0);
    cout<<newch;
    return 0;
}