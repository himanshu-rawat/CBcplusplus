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
void InsertAtTail(node* &head, int d){
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
    }
}
void print(node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void input(node* &head){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        InsertAtTail(head,d);
    }
}
node* Merge(node* a, node* b){
    node *c;
    if(a){
        c=a;
        c->next=Merge(a->next,b);
    }
    else{
        return b;
    }
    
    return c;
} 
node* lastfifth(node *head,int kth){
    node *fast=head;
    node *slow=head;
    for(int i=1;i<=kth;i++){
        fast=fast->next;
    }
    while(fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
int length(node *head){
    int count=0;
    while(head){
        count++;
        head=head->next;
    }
    return count;
}
int main(){
    node *head=NULL;
    input(head);
    int k;
    cin>>k;
    int size=length(head);
    if(k>=size){
        k=k%size;
    }
    node *kth=lastfifth(head,k);
    node *newHead=kth->next;
    kth->next=NULL;
    node *MyMerge= Merge(newHead,head);
    print(MyMerge);
    return 0;
}