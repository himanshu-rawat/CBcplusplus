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
        InsertAtEnd(head,d);
    }
    
}
void InsertAtHead(node* &head,int d){
        node *n=new node(d);
        n->next=head;
        head=n;   
}
void DeleteAtTail(node* &head){
    if(head==NULL){
        return;
    }
    else if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    else{
        node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
}
int  Value(node *head){
    while(head->next){
        head=head->next;
    }
    return head->data;
}
void Sum(node *head, node *head1){
    int sum=0;
    int carry=0;
    node *a=head;
    node *b=head1;
    node *newHead=NULL;
    while(a && b){
        int alast=Value(head);
        DeleteAtTail(a);
        int blast=Value(head1);
        DeleteAtTail(b);
        sum=alast+blast+carry;
        if(sum>9){
            carry=sum/10;
            sum=sum%10;
        }
        else{
            carry=0;
        }

        InsertAtHead(newHead,sum);
    }
    if(carry!=0){
        InsertAtHead(newHead,carry);
    }
    print(newHead);   
}
int main(){
    node *head=NULL;
    node *head1=NULL;
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        InsertAtEnd(head,d); 
    }
     for(int i=0;i<m;i++){
        int d;
        cin>>d;
        InsertAtEnd(head1,d); 
    }
    Sum(head,head1);   
    return 0;
}
