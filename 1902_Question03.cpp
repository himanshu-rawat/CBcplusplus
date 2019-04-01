#include<iostream>
using namespace std;
void ReadNumStg(char ch[]){
    
}
int main(){
    int num;
    char ch[100];
    cin>>num;
    cin.ignore();// ignore the input buffer
    //cin.get();// we take input but does not store anywhere !!!.
    cin.getline(ch,100);
    cout<<num<<endl<<ch;
    return 0;
}