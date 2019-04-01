#include<iostream>
using namespace std;
// int *CreateArray(int n){
//     int *a=new int[n];
//     for(int i=0;i<n;i++){
//         a[i]=i*10;
//     }
//     return a;
// }
int *CreateArray(int n){
    int *array=new int[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    return array;
}
int main(){
    int *a=new int[10];
    a=new int [20];
    // int n;
    // cin>>n;
    // int *arr=CreateArray(n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }


    // int n;
    // cin>>n;
    // int *a=CreateArray(n);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // delete []a;
    // int r,c;
    // cout<<"enter the value of row and col "<<endl;
    // cin>>r>>c;
    // //Creating Row Dynamically
    // int **row=new int *[r];
    // //Creating Col Dynamically
    // for(int i=0;i<r;i++){
    //     row[i]=new int [c]; 
    // }

    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cin>>row[i][j];
    //     }
    // }
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cout<<row[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //Deleting the 2D Dynamically ALlocated Array
    // for(int i=0;i<r;i++){
    //     delete []row[i]; 
    //     row[i]=NULL;
    // }
    // delete []row;
    // row=NULL;

    return 0;
}