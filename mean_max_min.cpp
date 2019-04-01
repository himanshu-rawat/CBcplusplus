#include<iostream>
#include<climits>
using namespace std;
int main(){
	
	int n,num,i,max,min,sum=0;
	max=INT_MIN;
	min=INT_MAX;
	cout<<"Enter N Numbers: ";
	cin>>n;
	i=1;
	while(i<=n){
		cin>>num;
		if(max<num){
			max=num;
		}
		
		if(min>num){
			min=num;
			
		}
		sum=sum+num;
		
		i++;
	}
	cout<<"The Mean Of The Numbers Is: "<<sum/n<<endl;
	cout<<"The Largest Among Them Is: "<<max<<endl;
	cout<<"The Minimum Among Them Is: "<<min<<endl;
	return 0;
}
