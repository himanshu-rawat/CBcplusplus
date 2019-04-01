#include<iostream>
using namespace std;
int main(){
	int Finit=0,Fend=300,celcius=0;
	
//	celcius=(5/9.0)*(Finit-32);
//	cout<<celcius;
	
	while(Finit<=Fend){
		
		
		cout<<Finit<<" ";
		
		celcius=(5/9.0)*(Finit-32);   // Here We have to divide 5/9.0 so conver int/int to int/float so it comes in float value . 
									 //If we do not do that 5/9 give 0(Zero) Every Time. 
		cout<<celcius<<endl;
	
		Finit=Finit+20;
	}
	return 0;
}
