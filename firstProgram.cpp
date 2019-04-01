#include<iostream>  // Header File
using namespace std;
int main()        // Program Start From Here
{     // Single line comment

     /*
	   Multiline 
	   Comments
	 */
	cout<<"Hello World"<<endl;  // cout<< used to output the data on the console
	
	int n; // Create a bucket of name :n 
	int a,b,c; // a,b,c of same data type which is int in this case
	
	cout<<a<<b<<c<<endl; //Any Garbage Value Can Come in this values of (a,b,c)    // cout<<endl; => for next line just line '\n'
	
	
	cout<<"Enter an integer"<<endl; // " "=> String Comes in Double Quotes
	cin>>n;  // Takes input from the user via console and stores it in the bucket n
	//cout<<'\n';
	cout<<n<<endl;
	
	char ch;
	cin>>ch;
	cout<<ch<<endl;
	
	int p;
	p=10; // assignment
	
	int x=100000; // Initialization
	
	
	return 0;
	
	
	
}
