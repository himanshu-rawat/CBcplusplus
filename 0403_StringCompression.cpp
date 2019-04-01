// Sample Input:
// aaabbccds
// Sample Output:
// a3b2c2ds
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[1000];
    char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int freq[26]={0};
    cin>>ch;
    int length=strlen(ch);
    for(int i=0;ch[i]!='\0';i++){
		int indx=ch[i]-'a';
		freq[indx]++;
	}
    for(int i=0;i<26;i++){
        if(freq[i]>=1){
            if(freq[i]==1){
                cout<<alphabet[i];
            }
            else{
                cout<<alphabet[i]<<freq[i];
            }
            
        }
    }
    return 0;
}