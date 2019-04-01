#include<iostream>
using namespace std;
int main(){
    char ch[][100]={"Hello","Coding","World"};
    char c[100]={"hello"};
    int i,j,flag=0;
    for(i=0;i<3;i++){
        for(j=0;ch[i][j]!='\0' && c[j]!='\0';j++){
            if(ch[i][j]!=c[j]){
                flag=0;
                break;
            }
            else{
                flag=1;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag){
        cout<<"Exist"<<endl;
    }
    else{
        cout<<"Not Exist"<<endl;
    }
    
    return 0;
}