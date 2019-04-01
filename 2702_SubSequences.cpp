#include<iostream>
using namespace std;
int count=1;
void SubSequences(char in[],int i,char out[],int j){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<" ";
        return;
    }
     count++;
    SubSequences(in,i+1,out,j);
    out[j]=in[i];
    SubSequences(in,i+1,out,j+1);
}
//  d c cd b bd bc bcd a ad ac acd ab abd abc abcd 
// 16
int main(){
    char in[100],out[100];
    cin>>in;
    SubSequences(in,0,out,0);
    cout<<endl<<count;
    return 0;
}