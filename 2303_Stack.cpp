#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int d){
        data=d;
        next=NULL;
    }
};
class stack{
    node *head;
    int count;
    public:
    stack(){
        head=NULL;
        count=0;
    }
    void push(int data){
        if(head==NULL){
            head=new node(data);
        }
        else{
            node *n=new node(data);
            n->next=head;
            head=n;
            count++;
        }
    }
    void pop(){
        if(head==NULL){
            return;
        }
        else{
            node *temp=head;
            head=head->next;
            delete temp;
            count--;
        }
    }
    int  top(){
            return head->data;    
    }
    
    int size(){
        return count;
    }


};
int main(){

}