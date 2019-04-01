#include<iostream>
#include<vector>
using namespace std;


int main(){
    int size;
    cin>>size;
    vector <int> v;
    for(int i=0;i<size;i++){
        v.push_back(i);
    }
    v.pop_back(); 
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    return 0; 
}