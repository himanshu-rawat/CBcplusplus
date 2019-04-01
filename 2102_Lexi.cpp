#include<iostream>
using namespace std;
int main(){
    char ch[100][100];
    int n,i,j;
    cin>>n;
    for( i=0;i<n;i++){
        cin>>ch[i];
    }
    // cout<<"You Input : "<<endl;
    // for(i=0;i<n;i++){
    //     for(j=0;ch[i][j]!='\0';j++){
    //         cout<<ch[i][j];
    //     }
    //     cout<<endl;
    // }
  
    for(i=0;i<n;i++){
       
        for(j=0;ch[i][j]!='\0';j++){
            if(ch[i][j]<=ch[i][j+1])
        }
      
    }
   
    return 0;
}