#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int power(int a,int b){
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
}
void Print(int n){
    if(n<0){
        return;
    }
    Print(n-1);
    cout<<n<<" ";
}
void PrintInc(int n,int i){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    PrintInc(n,i+1);
}
int Sum(int a){
    if(a==1){
        return 1;
    }
    return a+Sum(a-1);
}
int ArraySum(int arr[],int n){
    //Base Case
    if(n==0){
        return 0;
    }
    //Recursive Case
    return arr[0]+ArraySum(arr+1,n-1);
}
void PrintArray(int arr[],int n,int i){
    if(i==n){
        cout<<endl;
        return;
    }
    cout<<arr[i]<<" ";
    PrintArray(arr,n,i+1);
}
void PrintReverse(int arr[],int n){
    if(n==0){
        return ;
    }
    cout<<arr[n-1]<<" ";
    PrintReverse(arr,n-1);
}
int num=1;
void PrintPattern(int n,int i){
    if(i>n){
        return;
    }
    for(int j=0;j<i;j++){
        cout<<num<<" ";
        num++;
    }
    cout<<endl;
    PrintPattern(n,i+1);
    
}
int main(){
    int a,b;
    cin>>a;
    PrintPattern(a,1);
    // int arr[100];
    // for(int i=0;i<a;i++){
    //     cin>>arr[i];
    // }
    // PrintArray(arr,a,0);
    // PrintReverse(arr,a);
    // int Asum=ArraySum(arr,a);
    // cout<<"Array Sum "<<Asum<<endl;
    return 0;
}