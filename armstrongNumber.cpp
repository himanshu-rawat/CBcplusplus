#include<iostream>
using namespace std;
int main(){
    int n,sum,num,i,store,product;
    int n1,n2;
    cin>>n1>>n2;
    while(n1<=n2){
        n=n1;
        store=n1;
        sum=0;

        while(n>0){
	 	num= n%10;
	 	product=1;
	 	i=1;
	 	while(i<=3) 
	 	   {
	 	   	 product=product*num;
	 	   	 i++;
			}
		sum=sum+product;
		
		n=n/10;
	 }
	 if(sum==store)
	    cout<<sum<<endl;
    n1++;
    }
return 0;
}
