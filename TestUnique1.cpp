//Sample Input:
//7
//1 1 2 2 3 3 4 
//Sample Output:
//4
#include<iostream>
using namespace std;
int main(){
	int arr[100000];
	int n;
	cin>>n;
	int ans;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		ans=arr[i]^arr[i+1];
	}
	cout<<ans;
}
