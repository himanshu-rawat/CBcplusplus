#include<iostream>
using namespace std;
int main(){

    int n,line,space,star;
    cin>>n;

    for(line=1;line<=n;line++){

        for(space=1;space<=(n-line);space++){
            cout<<" ";
        }
        for(star=1;star=(2*line)-1;star++){
            cout<<"*";
        }
        cout<<endl;

    }

    
    return 0;
}