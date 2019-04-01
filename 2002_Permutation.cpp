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
    char a[100],b[100];
    int arr[26]={0},index=0;
    cin>>a;
    cin>>b;
    for(int i=0;a[i]!='\0';i++){
        index=a[i]-'a';
        arr[index]=arr[index]+1;
        // index++;

    }
    for(int i=0;i<26;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;b[i]!='\0';i++){
        index=b[i]-'a';
        arr[index]=arr[index]-1;
        // index++;

    }
    for(int i=0;i<26;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i;
    for(i=0;i<26;i++){
        if(arr[i]!=0){
            cout<<"not permutation ";
            break;
        }
        
    }
    if(i==26){
        cout<<"Yes Permutation "<<endl;
    }

}