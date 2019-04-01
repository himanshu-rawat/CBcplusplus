#include<iostream>
using namespace std;
bool IsSorted(int arr[],int n,int i){
	if(i==n-1){
		return true;
	}
	if(arr[i]<arr[i+1]){
		//cout<<arr[i]<<" "<<arr[i+1]<<endl;
		IsSorted(arr,n,i+1);
	}
	else{
		return false;
	}
}
int main(){
	int n;
	cin>>n;
	 int arr[100];
	 for(int i=0;i<n;i++){
	 	cin>>arr[i];
	 }
	 if(IsSorted(arr,n,0) ){
	 	cout<<"true";
	 }
	 else{
	 	cout<<"false";
	 }
}
