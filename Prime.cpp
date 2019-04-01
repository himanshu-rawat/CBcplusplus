#include<iostream>
using namespace std;
int main(){
	
	int n,i;
	cout<<"Enter Your Number: ";
	cin>>n;
	i=2;
	while(i<n){
		if(n%i==0){
			cout<<"Not Prime"<<endl;;
			return 0;
		}
		i++;
	}
	
	cout<<"Prime"<<endl;
	
	//when we are outside the loop that means that we have
	
//	int num,i,counter;
//	cout<<"Enter Your Number: ";
//	cin>>num;
//	i=1;counter=0;
//	while(i<=num){
//		if(num%i==0){
//			counter=counter+1;
//		}
//		i++;
//	}
//	if(counter==2){
//		cout<<"Prime";
//	}
//	else{
//		cout<<"Not Prime";
//	}
	
	
	return 0;
}
