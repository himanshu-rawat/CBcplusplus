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
        node *n =new node(d);
        temp->next=n;
        n->next=NULL;
    }
    
}
void input(node * &head){
    int d;
    cin>>d;
    while(d!= -1){
        InsertAtEnd(head,d);
        cin>>d;
    }
}
void print(node *head){
    while(head){
        cout<<head->data<<"-->";
        head=head->next; 
    }
    cout<<"NULL";
}
void CreateCycle(node * &head){
    node *temp=head;
    node *join=head->next;
    node *prev=head;
    while(temp!=NULL){
        while(join->next!=NULL){
            if(temp->data==join->data){
                // prev=prev->next;
                prev->next=temp;
                cout<<"Joined"<<endl;
                return;
            }
            else{
                 join=join->next;
                 prev=prev->next;
            }
        }
        temp=temp->next;
    }
    //temp->next=head->next->next; 
}
void breakCycle(node* &head){
    node *slow=head;
    node *fast=head;
    while(fast){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            break;
        }
    }
    node *prev=head; 
    while(prev->next!=fast){
        prev=prev->next;
    }
    slow=head;
    while(slow->data!=fast->data){
        prev=fast;
        fast=fast->next;
        slow=slow->next;
    }
    prev->next=NULL;
}
int main(){
    node *head=NULL;
    input(head);
    print(head);
    CreateCycle(head);
    print(head);
    cout<<endl;
    breakCycle(head);
    print(head);
}