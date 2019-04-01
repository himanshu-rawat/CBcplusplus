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
void insertAtBeg(node* &head, int d){
    node *n = new node(d);
    n->next=head; 
    head=n;
}
void insertAtEnd(node* &head,int d){
    if(head==NULL){
        node *n =new node(d);
        head=n;
    }
    else{
        node *n= new node(d);
        node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
}
node* Search(node *head, int key){
    node *temp=head;
    while(temp){
        if(temp->data==key){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}
node* SearchRecursion(node *head, int key){
    node *temp=head;
    // Base Case;
    if(temp->next==NULL){
        return NULL;
    }
    //Recursive Case
    if(temp->data==key){
        return temp;
    }
    else{
        SearchRecursion(temp->next,key); 
    }
}
void deleteAtBeg(node* &head){
    if(head==NULL){
        return;
    }
    else{
        node *temp=head;
        head=temp->next;
        delete temp;
    }
}
void deleteAtEnd(node* &head){
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
void lastFifth(node* head){
    node *ahead=head;
    node *behind=head;
    for(int i=1;i<=5;i++){
        ahead=ahead->next;
    }
    while(ahead->next!=NULL){
        ahead=ahead->next;
        behind=behind->next;
    }
    cout<<endl<<"Behind Ka Data "<<behind->data<<endl;
    //return behind;
}
void ReverseLinkedList(node* &head){
    if(head==NULL || head->next==NULL){
        return;
    }
    node *previous=NULL;
    node *current=head;
    node *n; 
   while(current!=NULL){
       n=current->next;
       current->next=previous;
       previous=current;
       current=n;
   }
   head=previous;
    
}
void mid(node * head){
    node *fast=head->next;
    node *slow=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    cout<<"slow->data:- "<<slow->data<<endl;
}
void print( node * head){
    while(head){
        cout<<head->data<<" ";
        head=head->next; 
    }
}
int main(){
    node *head=NULL;
    int data;
    cin>>data;
    while(data!=7){
        insertAtEnd(head,data); 
        cin>>data;
    }
    print(head);
    cout<<endl;
    mid(head);
    //ReverseLinkedList(head);
    print(head);

    insertAtEnd(head,56);
    insertAtEnd(head,57);

    //print(head);
    //deleteAtBeg(head);
   
    cout<<endl;
    //print(head);

    //deleteAtEnd(head);
    cout<<endl;
    //print(head);
    lastFifth(head);


    
    // Watch Again the video Of Bubble Sort Implemenation in Linked List Dated:- 12/03/2019(Tuesday)
    
    
}