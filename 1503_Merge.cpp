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
void InsertAtEnd(node *&head,int d){
    if(head==NULL){
        head=new node(d); 
        return ;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node *n=new node(d);
    temp->next=n;
}
void Input(node * &head){
    int d;
    cin>>d;
    while(d!= -1){
        InsertAtEnd(head,d);
        cin>>d;
    }
}
node * Merge(node *a, node * b){
    node *c;
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }

    if(a->data < b->data){
        c=a;
        c->next= Merge(c->next,b);
    }
    else{
        c=b;
        c->next= Merge(a,c->next); 
    }
    return c;
}
node * mid(node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node *slow=head;
    node *fast=head->next;
    while(fast){
        fast=fast->next;
        if(fast){
            slow=slow->next;
            fast=fast->next;
        }
    }
   // cout<<endl<<slow->data<<endl;
    return slow;
}
node * MergeSort(node *head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    //divide
    node *m=mid(head);
    //cout<<endl<<m->data<<endl;
    node *a=head;
    node *b=m->next;
    m->next=NULL;  
    //sort
    a= MergeSort(a);
    b=MergeSort(b); 
    //merge
    node *Mynode= Merge(a,b);
    return Mynode;
}
void print(node *head){
    while(head){
        cout<<head->data<<"-->";
        head=head->next; 
    }
    cout<<"NULL"<<endl;
}
void CreateCycle(node *&head){
    node *slow=head;
    node *fast=head->next->next;
    while(fast!=slow){
        
    }
}
int main(){

    node *head=NULL;
    node *head1=NULL;

    Input(head);
    CreateCycle(head);

    // Input(head1);
    //  print(head);
    // // print(head1);
    // head=MergeSort(head);

    // head=Merge(head,head1); 
     print(head);
    return 0;
}