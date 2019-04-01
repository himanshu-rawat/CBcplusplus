#include<iostream>
using namespace std;
int pow(int a, int b){
    if(b==0){
        return 1;
    }
    int val= a*pow(a,b-1);
	return val;
}
int main(){
    int a,b;
    cin>>a>>b;
    int p= pow(a,b);
    cout<<p<<endl;
    return 0;
}

