#include<iostream>
using namespace std;

int HulkSteps(int steps,int value,int i){
	int count=0;
	if(i>=value){
		return count; 
	}
	
	if(value%2==0){
		count =1;
		return  count;
	}
	else{
		count++;
		return count+1;
	}
}
int main(){
	int n;
	cin>>n;
	int steps[100000];
	
	for(int i=0;i<n;i++){
		cin>>steps[i];
	}
	
	for(int i=0;i<n;i++){
		int value=steps[i];
		cout<<HulkSteps(steps[i],value,0);
		cout<<endl;
	}
}
