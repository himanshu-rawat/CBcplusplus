#include<iostream>
using namespace std;
int UniqueNumber(int arr[],int n){
	int count[64]={0};
	for(int j=0;j<n;j++){
		int i=0;
		int no=arr[i];
		while(n>0){
			count[i]=count[i]+(no&1);
			i++;
			no=no>>1;
		}
	}
	int p=1;
	int ans =0; 
	for(int i=0;i<64;i++){
		count[i]=count[i]%3;
		ans=ans+count[i]*p;
		p=p<<1;
	}
	cout<<ans;
	return ans;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<UniqueNumber(arr,n);
	return 0;
}