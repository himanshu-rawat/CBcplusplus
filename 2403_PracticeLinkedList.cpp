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
void InsertAtHead(node* &head,int d){
        node *n=new node(d);
        n->next=head;
        head=n;   
}
void DeleteAtHead(node* &head){
    if(head==NULL){
        return;
    }
    else{
        node *temp=head;
        head=temp->next;
        delete temp;
    }
}
void InsertAtTail(node* &head,int d){
    if(head==NULL){
        head=new node(d);
        return;
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
void print(node* head){
    while(head){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<endl;
}
int length(node *head){
    int count=0;
    while(head){
        count++;
        head=head->next;
    }
    return count;
}
node * SearchKey(node * head,int key){
    while(head){
        if(head->data==key){
            return head;
        }
        head=head->next;
    }
    if(head==NULL){
        return NULL;
    }
}
node *RecursiveSearch(node *head,int key){
    if(head==NULL){
        return NULL;
    }
    if(head->data==key){
        return head;
    }
    else{
        RecursiveSearch(head->next,key);
    }
}
void lastfifth(node *head,int kth){
    node *fast=head;
    node *slow=head;
    for(int i=1;i<=kth;i++){
        fast=fast->next;
    }
    while(fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    cout<<"Last Fifth Node's Data is = "<<slow->data<<endl;
}
void ReverseLinkedList(node* &head){
    if(head==NULL || head->next==NULL){
        return;
    }
    node *prev=NULL;
    node *current=head;
    node *n;
    while(current!=NULL){
        n=current->next;
        current->next=prev;

        prev=current;
        current=n;

    }
    head=prev;
}
void ReverseRecursion(node* &head,node* &prev, node* &current){
	//Base Case
	if(current==NULL){
		head=prev;
		return;
	}
	//Recursive Case
	else{
		node *n;
		n=current->next;
		current->next=prev;
		ReverseRecursion(head,current,n);
	}
}
void BubbleSort(node* &head){
    node* current;
    node* prev;
    node* n;
    int l=length(head);
    cout<<"Length of Linked List = "<<l<<endl;
    for(int i=0;i<l-1;i++){
        current=head;
        prev=NULL;
        while(current && current->next){
            // Swapping Hogi 
            if(current->data >current->next->data){
                // first node swap hoga to head change hoga
                if(prev==NULL){
                    n=current->next;
                    current->next=n->next;
                    n->next=current;
                    prev=head=n;
                }
                // head swap nhi hua to
                else{
                    n=current->next;
                    current->next=n->next;
                    n->next=current;
                    prev->next=n;
                    prev=n;  
                }

            }
            // Swapping Nahi Hogi
            else{
                prev=current;
                current=current->next;
            }
        }
    }
}
void BubbleSortAgain(node* &head){
    node *prev;
    node *current;
    node *n;
    int size=length(head);
    for(int i=0;i<size-1;i++){
        prev=NULL;
        current=head;
        while(current && current->next){
            //Swapping Hogi
            if(current->data > current->next->data){
                // agar prev null hai to head swap hoga
                if(prev==NULL){
                    n=current->next;
                    current->next=n->next;
                    n->next=current;
                    prev=head=n;
                }
                // head swap nhi hoga
                else{
                    n=current->next;
                    current->next=n->next;
                    n->next=current;
                    prev->next=n;
                    prev=n;
                }
            }
            // Swapping Nhi Hogi
            else{
                prev=current;
                current=current->next;
            }

        }
    }
}
int main(){
    node *head=NULL;
    int d;
    cin>>d;
    while(d!=0){
        InsertAtTail(head,d);
        cin>>d;
    }
    print(head);
    node*head1=NULL;
    cin>>d;
    while(d!=0){
        InsertAtTail(head1,d);
        cin>>d;
    }
    print(head1);

      
    return 0;
}