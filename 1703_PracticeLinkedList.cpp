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
        node * n=new node(d);
        temp->next=n;
        n->next=NULL;
    }
}
void Input(node * &head){
    int d;
    cin>>d;
    while(d!=-1){
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
node* mid(node * head){
    node *slow =head;
    node *fast =head;
    fast=fast->next;
    while(fast->next!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            slow=slow->next;
        }  
    }
    return slow;
}
node* merge(node *a, node *b){
    node *c;
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    if(a->data < b->data){
        c=a;
        c->next=merge(a->next,b);
    }
    else{
        c=b;
        c->next=merge(a,b->next);
    }
    return c;
}
node* MergeSort(node *head){
    //base case
    if(head==NULL){
        return head; 
    }
    if(head->next==NULL){
        return head; 
    }
    //divide
    node *m=mid(head);
    node *a=head;
    node *b=m->next; 
    m->next=NULL;
    //sort
    a=MergeSort(a);
    b=MergeSort(b);
    //merge
    node *MergeNode=merge(a,b);

    return MergeNode;
}
void CreateCycle(node * &head){
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head->next->next; 
}
bool isCyclic(node *head){
    node *slow=head;
    node *fast=head;
    while(fast){
        fast=fast->next;
        if(fast==NULL){
            return false;
        }
        fast=fast->next;
        slow=slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
void BreakCycle(node* &head){
    node *slow=head;
    node *fast=head;
    while(fast){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            break;
        }
    }
    node *previous=head;
    while(previous->next!=fast){
        previous=previous->next;
    }
    slow=head;
    while(slow!=fast){
        previous=fast;
        fast=fast->next;
        slow=slow->next;
    }
    previous->next=NULL;
}
int main(){
    node *head=NULL;
    node *headTwo=NULL;

    Input(head);
    print(head);
    cout<<endl;
    //CreateCycle(head);
    bool kyaCyclicHai= isCyclic(head);
    if(kyaCyclicHai){
        cout<<"Ha Cyclic Hai";
        BreakCycle(head);
        cout<<endl;
        print(head);
    }
    else{
        cout<<"Nahi hai Cyclic";
    }
    
    // node *MyMergeSort=MergeSort(head);
    // print(MyMergeSort);
    // cout<<endl;
    // Input(headTwo);
    // print(head);
    // cout<<endl;
    // print(headTwo);
    // cout<<endl;
    // node *newNode=merge(head,headTwo);
    // print(newNode);
    // cout<<endl;
}