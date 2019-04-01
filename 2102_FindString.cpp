#include<iostream>
using namespace std;
int main(){
    // Take the size of Character which have to be input.
    int n;
    cin>>n;
    char ch[100][100];
    // Take n inputs of charcters.
    for(int i=0;i<n;i++){
        cin>>ch[i];
    }
    char stng[0][100];
    for(int i=0;i<1;i++){
        cin>>stng[i];
    }
    cout<<"\nFirst Output"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;ch[i][j]!='\0';j++){
            cout<<ch[i][j];
        }
        cout<<endl;
    }
    cout<<"\nSecond Output"<<endl;

    for(int i=0;i<1;i++){
        for(int j=0;stng[0][j]!='\0';j++){
            cout<<stng[0][j];
        }
    }

   
    
    return 0;
}