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
void InsertAtEnd(node* &head,int d){
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
void DeleteIndex(node* &head, int index){
    if(index==0){
        node *temp=head;
        head=head->next;
        delete temp;
    }
    else{
        node *temp=head;
        for(int i=0;i<index-1;i++){
            temp=temp->next;
        }
        node *n;
        n=temp->next->next;
        temp->next=n;
        delete temp->next;
    }
    //cout<<"Temp->data "<<temp->data<<endl;

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
    int q;
    cin>>q;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        InsertAtEnd(head,d);
    }
    int query[100];
    for(int i=0;i<q;i++){
        cin>>query[i];
    }
    for(int i=0;i<q;i++){
        int index=query[i];
        DeleteIndex(head,index);
        print(head);
    }
}

int main(){
    node *head=NULL;
    input(head); 
    //print(head);   
    return 0;
}