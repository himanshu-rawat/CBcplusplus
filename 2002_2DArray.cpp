#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={ {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // for(int i=0;i<4;i++){
    //     cout<<"Enter the Value of Row :"<<i<<endl;
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<"Lower Triangle"<<endl;
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"Upper Triangle"<<endl;
    // for(int i=0;i<4;i++){
    //     int space=i;
    //     for(space=0;space<i;space++){
    //         cout<<" ";
    //     }
    //     for(int j=i;j<4;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<" Wave Print "<<endl;
    int j;
    for(int i=0;i<4;i++){
        if(i%2==0){
            for(j=0;j<4;j++){
            cout<<arr[j][i]<<" ";
            }

        }
        else{
            for(j=3;j>=0;j--){
               cout<<arr[j][i]<<" "; 
            }
        }
        cout<<endl;

    }
    cout<<" Wave Print"<<endl;
    int inner=3;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           if(j%2==0){
               cout<<arr[i][j]<<"   ";
           }
           else{
               cout<<arr[inner][j]<<"   ";
           }
        }
        inner--;
        cout<<endl;
    }

    return 0;
}