#include<iostream>
using namespace std;
void reverse(int a[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    
}
void reverse1(int *a,int n){
    int i=0;
    int j=0;
    while(i<j){
        int temp = *(a+i);
        *(a+i)= *(a+j);
        *(a+j)= temp;
        i++;
        j--;
    }
}
int main(){

    int a[]={5,4,3,2,1};
    int  n=5;
    reverse(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    reverse1(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    
    return 0;
}


//Recursion Videos 
// not WAtch:
// tyling problem
// n queen using bit set