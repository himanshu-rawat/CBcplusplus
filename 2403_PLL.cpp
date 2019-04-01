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
node * mid(node *head){
    node *slow=head;
    node *fast=head;
    fast=fast->next;
    while(fast){
        fast=fast->next;
        if(fast){
            slow=slow->next;
            fast=fast->next;
        }
        
    }
    return slow;

}
node* Merge(node* a, node* b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    node *c;
    if(a->data < b->data){
        c=a;
        c->next=Merge(a->next,b);
    }
    else{
        c=b;
        c->next=Merge(a,b->next);
    }
    return c;
} 
node* mergeSort(node *head){
    // Base Case
    if(head==NULL || head->next==NULL){
        return head; 
    }
    // Divide
    node *m=mid(head);
    node *a=head;
    node *b=m->next;
    m->next=NULL;

    //Sort
    a=mergeSort(a);
    b=mergeSort(b);

    //Merge
    node *NewHead=Merge(a,b);
    return NewHead;


}
void CreateCycle(node *head){
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head->next->next;
}
int main(){
    node *head=NULL;
    input(head);
    print(head);
    CreateCycle(head);
    
    return 0;
}