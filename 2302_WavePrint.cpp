// 11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END
// 11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END
// Take as input a two-d array. Wave print it column-wise.
#include<iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cin>>n>>m;
    int arr[100][100];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    } 
    for(i=0;i<n;i++){
        if(i%2==0){
            for(j=0;j<m;j++){
            cout<<arr[j][i]<<", ";
            }

        }
        else{
            for(j=m-1;j>=0;j--){
               cout<<arr[j][i]<<", "; 
            }
        }

    }
    cout<<"END"<<endl;
    return 0;
}