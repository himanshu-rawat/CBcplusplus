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
void InsertAtEnd(node * &head,int d){
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
        n->next=NULL; 
    }
}
int length(node *head){
    int count=0;
    while(head){
        count++; 
        head=head->next;
    }
    return count;
}
void BubbleSort(node* &head){

	node* current;
	node* prev;
	node* n;

	int l=length(head);
	for(int i=0;i<l-1;i++){
		current=head;
		prev=NULL;
		while(current && current->next){
			if(current->data > current->next->data){
				if(prev==NULL){
					n=current->next;
					current->next=n->next;
					n->next=current;
					prev=head=n;
				}
				else{
					n=current->next;
					current->next=n->next;
					n->next=current;
					prev->next=n;
					prev=n;

				}
			}
			else{
				prev=current;
				current=current->next;
			}
		}
	}
}
void print(node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next; 
    }
}
int main(){
    node *head=NULL;
    int n;
    cin>>n;
    int d;
    for(int i=0;i<n;i++){
        cin>>d;
        InsertAtEnd(head,d);
    }
    BubbleSort(head);
    print(head);
    
}