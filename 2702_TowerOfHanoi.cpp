#include<iostream>
using namespace std;
void TowerOfHanoi(int n,char source,char helper, char destination){
    if(n==0){
        return ;
    }
    TowerOfHanoi(n-1,source,destination,helper);
    cout<<"Taking Disk "<<n <<" from "<<source<<" to "<<destination<<endl;
    TowerOfHanoi(n-1,helper,source , destination);
}
int main(){
    int n;
    cin>>n;
    TowerOfHanoi(n,'A','B','C');
    return 0;
}