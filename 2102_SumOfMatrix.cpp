/*
Write a program that determines which row
or column in a 2d array of integers has the
largest sum
*/
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rowSum=0,row=0;
    int colSum=0,col=0;
    int i,j,result,rr,cc;
    for(i=0;i<3;i++){
        rowSum=0;
        colSum=0;
        for(j=0;j<3;j++){
            rowSum=rowSum+arr[i][j]; 
            colSum=colSum+arr[j][i];  
        }
        if(row<rowSum){
        row=rowSum;
        }
        if(col<colSum){
        col=colSum;
        }
        if(row>col){
            result=row;
        }
        else{
            result=col;
        }
        
    }
   cout<<result<<endl;
    return 0;
}