#include<iostream>
using namespace std;

void factorial(int n){
    long long int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial of the "<<n<<" is = "<<fact<<endl;
}

int main(){
    int n;
    cout<<"Enter The Number Of Which You Want Factorial :\n";
    cin>>n;
    factorial(10-5);
    return 0;
}