#include<iostream>
using namespace std;
int ElephantMove(int i, int j){
    if(i==0 && j==0){
        return 1;
    }
    int sum=0;
    for(int k=0;k<i;k++){
        sum=sum+ElephantMove(k,j);
    }
    for(int k=0;k<j;k++){
        sum=sum+ElephantMove(i,k);
    }
    return sum;
}
int main(){
    int i,j;
    cin>>i>>j;
    cout<<ElephantMove(i,j);
    return 0;
}