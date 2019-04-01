#include<iostream>
using namespace std;
void answer(char a[],char b[],int i){
	if(a[i]=='\0' || b[i]=='\0'){
		return;
	}
	if(a[i]==b[i]){
		cout<<0;
		answer(a,b,i+1);
	}
	else{
		cout<<1;
		answer(a,b,i+1);
	}
	
}
int main(){
	int n;
	cin>>n;
	while(n--){
		char a[100];
		char b[100];
		cin>>a;
		cin>>b;
		answer(a,b,0);
		cout<<endl;
	}
}
