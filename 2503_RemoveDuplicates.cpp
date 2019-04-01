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
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<endl;
}
void input(node* &head){
    int d;
    cin>>d;
    while(d!=0){
        InsertAtTail(head,d);
        cin>>d;
    }
}
void RemoveDuplicates(node* &head){
    node *temp=head;
    node *runner=head->next;
    while(temp->next==NULL){
        while(runner->next){
            if(temp->data==runner->data){
                runner->next=runner->next->next;
                delete runner->next;
            }
        }
        temp=temp->next;
    }
    print(head);
}
int main(){
    node *head=NULL;
    input(head);
    print(head);
    RemoveDuplicates(head);
    return 0;
}