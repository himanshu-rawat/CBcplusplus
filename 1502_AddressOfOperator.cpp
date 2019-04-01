//AddressOfOperator
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int &y=x;
    char ch='A';
    cout<<" &x "<<&x<<endl;
    cout<<" &y=x "<<y<<endl;
    cout<<" &y "<<&y<<endl;
    cout<<" &ch "<<&ch<<endl;

    int arr[]={1,2,3,4};

    cout<<arr+1<<endl;
    cout<<&arr+1<<endl;// it means that we jump to the next block of the array (going to next colony).
    cout<<&arr[0]<<endl;
 
    
    return 0;
}