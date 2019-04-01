#include <iostream>
using namespace std;
int main(){

	char a[1000];
    char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int freq[26]={0};
    cin>>a;
	for(int i=0;a[i]!='\0';i++){
		int indx=a[i]-'a';
		freq[indx]++;
	}
    // for(int i=0;i<26;i++){
    //     cout<<freq[i]<<" ";
    // }
    int max=-1;
    int index=-1;
    for(int i=0;i<26;i++){
        if(max<freq[i]){
            max=freq[i];
            index=i;
        }
    }
    // cout<<endl<<max<<endl<<index<<endl;
    cout<<alphabet[index];
	return 0;
}