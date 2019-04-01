#include<iostream>
using namespace std;
int main(){

    int a[7]={1,3,5};
    int b[4]={2,4,6,8};
    int m=3,n=4;
    int i,j,k;
    i=m-1;
    j=n-1;
    k=m+n-1;
    while(i>=0 && j>= 0){
        if(b[j]>a[i]){
			a[k]=b[j];
			k--;
			j--;
		}		
		else{
			a[k]=a[i];
			k--;
			i--;
		}
    }
    if(i>=0 &&j<0){
        while(i>=0){
            a[k]=a[i];
            k--;
            i--;
        }
    }
    else{
        while(j>=0){
            a[k]=a[j];
            k--;
            j--;
        }
    }

    cout<<a[((m+n)/2)+1];
    return 0;
}