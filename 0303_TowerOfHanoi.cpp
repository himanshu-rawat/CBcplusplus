#include<iostream>
using namespace std;
void TowerOfHanoi(char source, char helper, char destination, int n){
    if(n==0){
        return;
    }
    TowerOfHanoi(source,destination,helper,n-1);
   
    cout<<"Move "<<n<<"th disc from T"<<source<<" to T"<<destination<<endl; 
    TowerOfHanoi(helper,source,destination,n-1);
}
int count=0;
int CountHanoi(char source, char helper, char destination, int n){
    if(n==0){
        return 0;
    }
    CountHanoi(source,destination,helper,n-1);
    count++;
    CountHanoi(helper,source,destination,n-1);
    return count;
}
int main(){
    int n;
    cin>>n;
    TowerOfHanoi('1','3','2',n);
    cout<<CountHanoi('1','3','2',n);
    return 0;
}
// Move 1th disc from T1 to T3
// Move 2th disc from T1 to T2
// Move 1th disc from T3 to T2