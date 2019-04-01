#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	if(n%2==0)
	  {
	  	cout<<"Even"<<endl;
	  }
	else
	   cout<<"Odd"<<endl;
	   
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a>=b && a>=c)
	  {
	  	cout<<"Largest "<<a<<endl;
	  }
	else if(b>=a && b>=c){
		cout<<"Largest "<<b<<endl;
	}
	else{
		cout<<"Largest "<<c<<endl;
	}
}
