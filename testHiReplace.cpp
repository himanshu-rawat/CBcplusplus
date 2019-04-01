//abchihitfhi
#include<iostream>
using namespace std;
int count=0;
void HiCount(char ch[],int i){
	if(ch[i]=='\0'){
		return;
	}
	if(ch[i]=='h' && ch[i+1]=='i' && ch[i+2]!='t'){
		count++;
		HiCount(ch,i+1);
	}
	else{
		HiCount(ch,i+1);
	}
}
void RemoveHi(char ch[],int i){
	if(ch[i]=='\0'){
		return;
	}
	if(ch[i]=='h' && ch[i+1]=='i' && ch[i+2]=='t'){
		cout<<"hit";
		RemoveHi(ch,i+3);
	}
	else if( ch[i]=='h' && ch[i+1]=='i'){
		RemoveHi(ch,i+2);
	}
	else{
		cout<<ch[i];
		RemoveHi(ch,i+1);
	}
}
void InsertHi(char ch[],int i){
	if(ch[i]=='\0'){
		return;
	}
	if(ch[i]=='h' && ch[i+1]=='i' && ch[i+2]=='t'){
		cout<<"hit";
		InsertHi(ch,i+3);
	}
	else if( ch[i]=='h' && ch[i+1]=='i'  && ch[i+2]!='t'){
		cout<<"bye";
		InsertHi(ch,i+2);
	}
	else{
		cout<<ch[i];
		InsertHi(ch,i+1);
	}
}
int main(){
	char ch[1000];
	cin>>ch;
	HiCount(ch,0);
	cout<<count<<endl;
	RemoveHi(ch,0);
	cout<<endl;
	InsertHi(ch,0);
}
