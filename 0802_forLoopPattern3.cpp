#include<iostream>
using namespace std;
int main(){

    int n;
    char ch;
    cin>>n;
    for(int line=n;line>0;line--){
        ch='A';
        for(int i=1;i<=line;i++){
            cout<<ch;
            ch++;
        }
        ch=ch-1;
        for(int i=1;i<=line;i++){
            cout<<ch;
            ch--;
        }

        cout<<"\n";
    }
    
    
    return 0;
}