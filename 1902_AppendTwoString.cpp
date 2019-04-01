#include<iostream>
using namespace std;
int LengthOfString(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]!='\n'){
            count++;
        }
    }
    return count;
}
int main(){
    char a[100];
    char b[100];
    cin.getline(a,100,'\n');
    cin.getline(b,100,'\n');
    int sizeA = LengthOfString(a);
    int sizeB = LengthOfString(a);
     //cout<<sizeA<< "    " <<sizeB<<endl;
    int index=0;
    int i;
    for( i=sizeA;i<(sizeA+sizeB);i++){
        a[i]=b[index];
        //cout<<" i= "<<i<<endl;
        index++;
    }
    //i=i-1;
    a[i]='\0';
    cout<<a<<endl;



    return 0;
}