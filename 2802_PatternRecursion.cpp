#include<iostream>
using namespace std;
// void pattern(int n, int i){
//     if(n==0){
//         return;
//     }
//     for(int j=0;j<i;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
//     pattern(n-1,i+1);
// }

// void pattern(int n, int i){
//     if(n==0){
//         return;
//     }
//     pattern(n-1,i+1);
//     for(int j=0;j<i;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
//     //pattern(n-1,i+1);
// }
// int num=1;
// void pattern(int n, int i){
//     if(n==0){
//         return;
//     }
//     for(int j=0;j<i;j++){
//         cout<<num<<" ";
//         num++;
//     }
//     cout<<endl;
//     pattern(n-1,i+1);
//     //pattern(n-1,i+1);
// }
char ch='A';
void pattern(int n, int i){
    if(n==0){
        return;
    }
    for(int j=0;j<i;j++){
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
    pattern(n-1,i+1);
    //pattern(n-1,i+1);
}
int main(){
    int n;
    cin>>n;
    pattern(n,1);
    return 0;
}