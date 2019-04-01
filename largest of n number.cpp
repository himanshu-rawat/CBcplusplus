#include<iostream>
using namespace std;
int main(){
	
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	
	if(a>=b && a>=c &&a>=d && a>=e)  {
		cout<<a;
	}
	else if(b>=c && b>=d && b>=e && b>=a){
		cout<<b;
	}
	else if( c>=a && c>=b && c>= d && c>=e){
		cout<<c;
	}
	else if(d>=a && d>=b && d>=c && d>=e){
		cout<<d;
	}
	else{
		cout<<e;
	}
	return 0;
}
