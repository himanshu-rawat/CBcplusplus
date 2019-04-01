#include<iostream>
using namespace std;
int main(){
    int x,y,max=-1;
    cin>>x>>y;
    for(int i=x;i<y;i++){
        if(max < (i^y) ){
            max= (i^y);
        }
    }
    cout<<max; 
    
     return 0;
}