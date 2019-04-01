#include<iostream>
using namespace std;
int main(){

    int a[100],b[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int i,j,k;
    i=n-1;
    j=n-1;
    k=n+n-1;
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

    // for(i=0;i<(n+n);i++){
    //     cout<<a[i]<<" ";
    // }

   cout<<a[((n+n)/2)-1];

    
    return 0;
}