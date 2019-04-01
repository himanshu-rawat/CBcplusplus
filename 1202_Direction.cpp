#include<iostream>
using namespace std;
int main(){
	//SSSNEEEW
    char ch;
    int x=0,y=0,i,j;
    
    ch=cin.get();
    while(ch!='\n'){

            if(ch=='E' ||ch=='e'){
                x++;
            }
            if(ch=='W'|| ch=='w'){
                x--;
            }
            if(ch=='N' || ch=='n' ){
                y++;
            }
            if(ch=='S'|| ch=='s'){
                y--;
            }
            ch=cin.get();
    }
       // cout<<" (x,y)="<<x<<y<<endl; 
    if(x>0 &&y>0){
        cout<<"First Quad "<<endl;
        cout<<" (x,y) = "<<x<<", "<<y<<endl;

        for(i=0;i<x;i++){
            cout<<'E';
        }
        for(j=0;j<y;j++){
            cout<<'N';
        }
         
    }
    if(x<=0 &&y>=0){
        cout<<"Second Quad "<<endl;
        cout<<" (x,y) = "<<x<<", "<<y<<endl;

        x=x*-1;

        for(i=0;i<x;i++){
            cout<<'N';
        }
        for(j=0;j<y;j++){
            cout<<'W';
        }
        
    }
    if(x<=0 &&y<=0){
        cout<<"Third  Quad "<<endl;
        cout<<" (x,y) = "<<x<<", "<<y<<endl;

        x=x * -1;
        y=y * -1;

        for(i=0;i<x;i++){
            cout<<'S';
        }
        for(j=0;j<y;j++){
            cout<<'W';
        }
    }

    if(x>=0 && y<=0){
        cout<<" Fourth Quad"<<endl;
        cout<<" (x,y) = "<<x<<", "<<y<<endl;

        y=y * -1;
        for(i=0;i<x;i++){
            cout<<'S';
        }
        for(j=0;j<y;j++){
            cout<<'E';
        }
    }
    return 0;
}