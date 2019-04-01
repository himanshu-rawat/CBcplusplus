#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool compare(string s1, string s2){
    if(s1.length() == s2.length()){
        return s1>s2;
    }
    else{
        return s1.length() <s2.length();
    }
     
}
int main(){
    string s[10];
    string s1; 
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        // getline(cin,s[i]); 
        getline(cin,s[i]);  
    }
    sort(s,s+n,compare);   
    for(int i=0;i<n;i++){
        cout<<s[i]<<" "; 
    }
   return 0; 
}