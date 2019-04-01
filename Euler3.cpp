//Prime 2 To N;

//in this question we first loop through 2 to N numbers 
//every time we check wheather that particular number is prime or not 
//if it is prime then we print it 
//else check for the next number.
#include<iostream>
using namespace std;
int main(){
	
	 long long int n=600851475143,loop,checkNum,i,max=2;
	
	loop=2;
	while(loop<=n){
		checkNum=loop;
		i=2;
		while(i<checkNum){
			if(checkNum%i==0){
				break;
			}
			i=i+1;
		}
		if(i==checkNum){
            if(max<i){
                max=i;
            }
		}
	  loop=loop+1;
	}
    cout<<"Prime is= "<<max<<endl;
	
	
	return 0;
}

