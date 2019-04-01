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
void InsertAtEnd(node * &head,int d){
    if(head==NULL){
        head=new node(d);
    }
    else{
        node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        node *n=new node(d);
        temp->next=n;
        n->next=NULL; 
    }
}
int length(node *head){
    int count=0;
    while(head){
        count++; 
        head=head->next;
    }
    return count;
}
void ReveseLinkedList(node * &head){
    if(head==NULL || head->next==NULL){
        return;
    }
    else {
        node *current=head;
        node *prev=NULL;
        node *n=head->next;
            while(current!=NULL){
                n=current->next;
                current->next=prev;
                prev=current;
                current=n;
            }
            head=prev;
    }
}
void ReverseRecursion(node * current, node *&prev, node * &n){
     //base case
    if(current==NULL || current->next==NULL){
        current=prev;
        return;
    }
    
    //recursive case
    n=current->next;
    current->next=prev;
    prev=current;
    current=n;
          
    
}
void print(node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next; 
    }
}
int main(){
    node *head=NULL;
    node *previou=NULL;
    int n;
    cin>>n;
    int d;
    for(int i=0;i<n;i++){
        cin>>d;
        InsertAtEnd(head,d);
    }
    ReverseRecursion(head,previou,head->next);
    print(head);
    return 0;  
}