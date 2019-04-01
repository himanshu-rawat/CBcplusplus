#include<iostream>
using namespace std;
int waterUnit(int water[],int n){
	int max=-10000;
	for(int i=0;i<n;i++){
		if(max<water[i]){
			max=water[i];
		}
	}
	//cout<<"Max is ="<<max<<endl;
	int sum=0;
	int roofHeight=max-1;
	//cout<<"Roof Height="<<roofHeight<<endl;
	for(int i=0;i<n;i++){
		if(water[i]==max){
			roofHeight=max;
				for(int i=0;i<n;i++){
					if(roofHeight-water[i]<0){
						
					}
					else{
						sum=sum+(roofHeight-water[i]);
					}
				}
			return sum;
		}
		else if(i==0 || i==(n-1)){
			//cout<<"i =0 || i==(n-1) "<<endl;
			//continue;
		}
		else if(roofHeight-water[i]<0){
			//cout<<" Greater Than Roof Height"<<endl;
			//	continue;
		}
		else{
			sum=sum+(roofHeight-water[i]);
		}
	}
	return sum;
	
}
int main(){
	int water[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>water[i];
	}
	int ans=waterUnit(water,n);
	cout<<ans<<endl;
	return 0;
}
