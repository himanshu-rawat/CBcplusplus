#include<iostream>
using namespace std;
void Palindrome(char ch[],int size){
    for(int i=0;i>size;i++){
        if(ch[i]!=ch[size]){
            cout<<ch<<" is NOT Palindrome"<<endl;
            break;
        }
        else{
            i=i+1;
            size=size-1;
        }
        

    }
}
int main(){
    char ch[100];
    cin.getline(ch,100,'\n');
    int size= sizeof(ch);
    cout<<size;
    //Palindrome(ch,size);
    
    return 0;
}