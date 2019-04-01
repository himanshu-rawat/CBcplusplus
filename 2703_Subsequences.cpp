#include <iostream>
using namespace std;

void Subsequences(char *in,int i,char *out,int j){
	// base-case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}

	// Recursive case
	// Leave first character and then print subsequences
	Subsequences(in,i+1,out,j);

	// Take the first character and then print subsequences
	out[j]=in[i];
	Subsequences(in,i+1,out,j+1);
}



int main(){
	char a[]="abc";
	char out[100];
	Subsequences(a,0,out,0);



	cout<<endl;
	return 0;
}