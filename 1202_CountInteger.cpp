#include<iostream>
using namespace std;
int main(){

    int special=0,character=0,digit=0,whitespace=0,n;
    char ch;
    ch=cin.get();
    while(ch!='$'){
        //cout<<"inside"<<endl;
        if( ( ch>='a' && ch<='z' ) || (ch>='A' && ch<='Z' ) ){
            character++;
        }
        else if(ch>='0' && ch<='9'){
            digit++;
        }
        else if(ch==' ' || ch=='\n' || ch=='\t'){
            whitespace++;
        }
        else{
            special++;
        }
        ch=cin.get();

    }
    cout<<"charchter = "<<character<<endl;
    cout<<"digits = "<<digit<<endl;
    cout<<"whitespace = "<<whitespace<<endl;
    cout<<"special = "<<special<<endl;  
    return 0;
}