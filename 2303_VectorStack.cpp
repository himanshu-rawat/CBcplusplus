#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    stack <char> s;
    char ch;

    while(ch!='$'){
        cin>>ch;
        s.push(ch);
    }
    return 0;
}