#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100000];
    int mirror[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mirror[i]= arr[ arr[i]];
    }
    int i=0;
    for(i=0;i<n;i++){
        if(mirror[i]!=arr[i]){
            cout<<"false";
            return 0;
        }
    }
    if(i==n){
        cout<<"true";
    }

    return 0;
}

