// Using ASCII values 65 to 90 uppercase , 97 to 122 lowercase , other than that "invalid" 
#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;

	if(ch>=65 &&ch<=90){
		cout<<"UPPERCASE"<<endl;
	}
	else if(ch>=97 &&ch<=122){
		cout<<"lowercase"<<endl;
	}
	else{
		cout<<"Invalid"<<endl;
	}	
}
