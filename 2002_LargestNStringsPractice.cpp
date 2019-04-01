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
    int n,largest=0;
    cin>>n;
    cin.ignore();
    char ch[100],largest_string[100];
    for(int i=0;i<n;i++){
        cin.getline(ch,100);
        int length=LengthOfString(ch);
        if(length>largest){
            largest=length;
            for(int i=0;i<=largest;i++){
                largest_string[i]=ch[i];
            }
        }
    }
    cout<<"Largest String = "<<largest_string<<" whose length is ="<<largest<<endl;

    return 0;
}