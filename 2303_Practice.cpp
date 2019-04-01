#include<iostream>
using namespace std;
// factorial using recursion
int fact( int n){
    if(n==0){
        return 1;
    }
    int f= n*fact(n-1);
    return f;
}
//fibonacci using recursion
int fiboo(int n){
    if(n==0 || n==1){
        return n;
    }
    int val=fiboo(n-1)+fiboo(n-2);
    return  val;
}
// A to power B (x^n) using recursion
int pow(int a, int b){
    if(b==0){
        return 1;
    }
    int val= a*pow(a,b-1);
}
// 1 To n print using recursion
void print1Ton(int n){
    if(n==0){
        return ;
    }
    print1Ton(n-1);
    cout<<n<<" ";
}
// n to 1 print using recursion
void printNto1(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    printNto1(n-1); 
}
// Sum of N numbers using Recursion
int sum(int n){
    if(n==0){
        return 0;
    }
    int val= n+sum(n-1);
}
// Sum Of Array Using Recursion
int ArraySum(int arr[],int size){
    if(size==0){
        return 0;
    }

    int accumulate = arr[0]+ArraySum(arr+1,size-1);
    return accumulate;
}
// Print Array From Starting To End Using Recursion 
void ArraPrint(int arr[],int size){
    if(size==0){
        return ;
    }
    cout<<arr[0]<<" ";
    ArraPrint(arr+1,size-1); 
    
}
// Print Array From End To Start Using Recursion 
void ArrayPrint(int arr[],int size){
    if(size==0){
        return;
    }
    cout<<arr[size-1]<<" ";
    ArrayPrint(arr,size-1);
}
bool isSorted(int arr[],int size){
    if(size==1){
        return true;
    }
    int val = arr[0]<arr[1] && isSorted(arr+1,size-1);
    return val;
}
bool isSortedDec(int arr[],int size){
    if(size==1){
        return true;
    }
    int val = arr[size-1]>arr[size-2] && isSortedDec(arr,size-1);
    return val;
}
int multi(int a, int b){
    if(b<0){
        if(b==0){
            return 0;
        }
        int sum = -a+multi(a,b+1);
        return  sum;
    }
    
    else{
        if(b==0){
        return 0;
        }
    int sum = a+multi(a,b-1);
    return sum;
    }
    
}
void StringIntoInteger(int arr[]){

}
void output(int n){
    //cout<<n<<" ";
    char ch[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0){
        //cout<<n<<" ";
        return;
    }
    
    output(n/10);
    cout<<ch[n%10]<<" ";
    
}
int main(){
   int n;
   //cout<<204%10;
   //cin>>n;
   output(2048);
    // cout<<multi(-5,-3);
    // int n;
    // //cin>>n;
    // int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    // int size = sizeof(arr)/sizeof(int);
    //cout<<fact(n)<<endl;
    //cout<<fiboo(n);
    //cout<<pow(2,10);
    // print1Ton(n);
    // printNto1(n);
    //cout<<sum(n); 
    // cout<<ArraySum(arr,size);
    //ArraPrint(arr,size);
    //ArrayPrint(arr,size);
    // if(isSortedDec(arr,size) ){
    //     cout<<"Sorted";
    // }
    // else{
    //     cout<<"Not Sorted";
    // }
     return 0;
}