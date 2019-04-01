#include<iostream>
using namespace std;
void print(char a[]){
    for(int i=0;a[i]!='\0';i++){
        cout<<a[i];
    }

}
void ReadLine(char a[]){
    char ch;
    ch=cin.get();
    int index=0;
    while(ch!='\n'){
        a[index]=ch;
        index++;
        ch= cin.get();
    }
    a[index]='\0';
}
int main(){

    char ch[100];
    cin>>ch;
    //print(ch);
    ReadLine(ch);
    cout<<ch;
   // cout<<sizeof(a);
    
    return 0;
}