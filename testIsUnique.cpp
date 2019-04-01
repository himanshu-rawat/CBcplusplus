//4
//1
//2
//2
//1
//Sample Output:
//true
#include<iostream>
using namespace std;
bool IsPalindrome(int arr[],int n,int i ){
	//Base Case
	if(i>=n){
		return true;
	}	
	// recursive case
	if(arr[i]==arr[n]){
		IsPalindrome(arr,n-1,i+1);
		return true;
	}
	else{
		return false;	
	}
}
int main(){
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(IsPalindrome(arr,n-1,0) ){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}
