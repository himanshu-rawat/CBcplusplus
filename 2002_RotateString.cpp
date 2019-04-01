#include<iostream>
using namespace std;
int LengthOfString(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;    
    }
    return count;
}
int main(){
    char ch[100];
    int n,i,j;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<"Enter the String to rotate :"<<endl;
    cin>>ch;
    int length=LengthOfString(ch);
    //cout<<"Length Of String :- "<<length<<endl;
    i=length;
    //cout<<i<<endl;
    j=i+n;
    //cout<<j<<endl;
    while(j>=n){
        ch[j]=ch[i];
        i--;
        j--;
    }
   //cout<<ch<<endl;
    int lengthAfter=LengthOfString(ch);
    i=length;
    j=0;
    while(i<lengthAfter){
        ch[j]=ch[i];
        j++;
        i++;
    }
    cout<<ch<<endl;
    ch[length]='\0';
    cout<<ch; 
    return 0;
}