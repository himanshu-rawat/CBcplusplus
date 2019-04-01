#include<iostream>
using namespace std;
int main(){

    char ch[100],alphabet;
    cin>>ch;
    for(int i=0;ch[i]!='\0';i++){
        if(i%2==0){
            ch[i]=ch[i]+1;
            cout<<ch[i];
        }
        else{
             ch[i]=ch[i]-1;
            cout<<ch[i];
        }
    }
    return 0;
}