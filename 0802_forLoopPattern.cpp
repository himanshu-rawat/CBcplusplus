#include<iostream>
using namespace std;
int main(){

    int n,no=1,line;
    cin>>n;
    for(line=1;line<=n;line++){

            for(int j=1;j<=line;j++){
                cout<<no<<" ";
                no++;
            }
            cout<<endl;
    }

    
    return 0;
}