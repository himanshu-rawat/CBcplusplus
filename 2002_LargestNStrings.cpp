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
    char largest[100];
    int n,largest_length=0;
    char ch[100];
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        cin.getline(ch,100,'\n');
        int length = LengthOfString(ch);
        //cout<<length<<endl;
        if(length>largest_length){
             largest_length=length;
             for(int i=0;i<=largest_length;i++){
                 largest[i]=ch[i];
             }
         }
    }

    cout<<largest<<" "<<largest_length<<endl;
    return 0;
}