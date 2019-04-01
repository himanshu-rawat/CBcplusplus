#include<iostream>
using namespace std;

//Forward Declaration..
void HelloWorld();
void printNumber(int);
void sum1(int a,int b){ // Multiple arguments passing to the function.
    cout<<a+b<<endl;
}
int sum2(int a,int b){
    return a+b;
}
int main(){
        
    // cout<<"Hello World"<<endl;
   // HelloWorld();
//    printNumber(12346);
    // int x=10,y=20;
    // sum1(x,y);

    int sum =sum2(4,5);
    cout<<sum<<endl;
    
    return 0;
}
void printNumber(int n){  // Here n is  the argument or parameter.
    cout<<n<<endl;
} 


void HelloWorld(){
    cout<<"Hello World "<<endl;
}