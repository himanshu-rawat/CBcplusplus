#include<iostream>
using namespace std;
class Pair{
 public:
    int x;
    int y;
    Pair(int a, int  b){
        x = a;
        y = b;
    } 
    // void Print(){
    //     cout<<"A"<<x<<endl;
    //     cout<<"B"<<x<<endl;
    // }
   bool operator >(const Pair X){
        if(x>X.x && y>X.y){
            //cout<<"P1 is greater ";
            return true;
        }
        else{
           
           return false;
        }
    }
};
int main(){
    Pair P1(2,4);
    Pair P2(3,3);
    // P1.print();
    // P2.print();
    if(P1>P2){
        cout<<"True";
    }
    else{
        cout<<"fasle";
    }
    return 0;
}