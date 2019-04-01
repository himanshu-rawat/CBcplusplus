#include<iostream>
using namespace std;
int main(){

    char b[][100]={
         "Apple",
         "Mango",
         "Guava"
    };
    for(int i=0;i<3;i++){
        for(int j=0;b[i][j]!='\0';j++){
            b[i][j]=b[i][j]^' ';
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;b[i][j]!='\0';j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }
   // cout<b[1]<<endl;
    // cout<<b[2]<<endl;
    return 0;
}