#include<iostream>
using namespace std;
void CountPi(char ch[], int j){
    if(ch[j]=='\0'){
        return;
    }
    if(ch[j]=='p' && ch[j+1]=='i'){
        cout<<"3.14";
        CountPi(ch,j+2);
    }
    else{
        cout<<ch[j];
        CountPi(ch,j+1);  
    }
    
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char ch[100][100];
    //Input
    for(int i=0;i<n;i++){
        // cin.getline(ch[i],100); 
        cin>>ch[i];
    }
    //Output
    for(int i=0;i<n;i++){
        CountPi(ch[i],0);
        if(i<n-1){
            cout<<endl;
        }
        
    }
    return 0;
}
// 3
// xpix
// xabpixx3.15x
// xpipippixx
// Sample Output:
// x3.14x
// xab3.14xx3.15x
// x3.143.14p3.14xx