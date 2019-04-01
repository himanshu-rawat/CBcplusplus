#include<iostream>
using namespace std;
void ReplacePi(char ch[1000],int n,int i){
	//Base Case
	if(ch[i]=='\0'){
		return;
	}
	if(ch[i]=='p' && ch[i+1]=='i'){
		//cout<<"in if codition"<<endl;
		cout<<"3.14";
		ReplacePi(ch,n,i+2);
		
	}
	else{
		//cout<< " in else condition "<<endl;
		cout<<ch[i];
		ReplacePi(ch,n,i+1);
	}	
}
int main(){
	char ch[10][1000];
	int n;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		cin>>ch[i];
	}
	
	for(int i=0;i<n;i++){
		ReplacePi(ch[i],n,0);
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
}
