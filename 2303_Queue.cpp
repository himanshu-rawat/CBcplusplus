#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *tail;
    node(int d){
        data=d;
        next=NULL;
    }
};
class queue{
    node *front;
    node *rear;
    int count;
    public:
    queue(){
        front=rear=NULL;
        count=0;
    } 
    void push(int d){
        if(front==NULL){
            front=rear=new node(d);
            count++;
        }
        else{
            node *n=new node(d);

            
            rear->next=n;
            rear=n;
            count++;
        }
    }
    
};
int main(){

}