//Prime 2 To N;

//in this question we first loop through 2 to N numbers 
//every time we check wheather that particular number is prime or not 
//if it is prime then we print it 
//else check for the next number.

//PRINT ALL PRIME NUMBERS
//Take as input a Number N and Print all the prime numbers from 2 to N
//
//
//Input Format:
//Input a number N
//
//Output Format:
//All prime numbers separated by Commas
//
//Sample Input:
//18
//Sample Output:
//2, 3, 5, 7, 11, 13, 17

#include<iostream>
using namespace std;
int main(){
	
	int n,loop,checkNum,i,counter=0,k;
	cin>>n;
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
			counter=counter+1;
		}
	  loop=loop+1;
	}
	//cout<<"counter= "<<counter<<endl;
	
	loop=2;
	k=1;
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
			
			
			if(k<counter){
				//cout<<"k is ="<<k<<endl;
				cout<<i<<", ";
				k++;
			}
			else{
				
				//cout<<"k= "<<k<<endl;
				cout<<i<<endl;
				k++;
		
			}	
		}
		
	  loop=loop+1;
	}
		
	return 0;
}
