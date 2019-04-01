#include<iostream>
using namespace std;
void TowerOfHanoi(int n, char source,char helper, char destination){
    //Base Case
    if(n==0){
        return;
    }
    //Recursive Case
    TowerOfHanoi(n-1,source,destination,helper);
    cout<<"Taking disk "<<n<<" Source "<<source<<" to "<<" destination "<<destination<<endl;
    TowerOfHanoi(n-1,helper,source,destination);
}
void SubSequences(char ch[],int i,char out[],int j){
   //Base Case
    if(ch[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    //Recursive Case
    SubSequences(ch,i+1,out,j);
    out[j]=ch[i];
    SubSequences(ch,i+1,out,j+1);
}
void Permutation(char ch[],int i){
    //Base Case
    if(ch[i]=='\0'){
        cout<<ch<<endl;
        return;
    }
    //Recursion
    for(int j=i;ch[j]!='\0';j++){
            swap(ch[i],ch[j]);
            Permutation(ch,i+1);
            swap(ch[i],ch[j]);
    }
}
int main(){
    char ch[100];//out[100];
    cin>>ch;
    Permutation(ch,0);
    return 0;
}