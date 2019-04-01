#include <iostream>
using namespace std;

 class node{
public:
	int data;
	node* next;

 	node(int d):data(d),next(NULL){}
};

void InsertAtBeg(node* &head,int d){
	node* n=new node(d);
	n->next=head;
	head=n;
}
void InsertAtEnd(node* &head ,int d){
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
    }
}
void Search( node *head, int key){
    
    while(head->next!=NULL){
        if(head->data==key){
            cout<<"found"<<endl;
            return;
        }
        head=head->next; 
    }
    if(head->next==NULL){
        cout<<"NOt Found";
    }
}
void SearchRecursion(node *head, int key){
    if(head->next==NULL){
        cout<<"NOt Found "<<endl;
        return;
    }
    if(head->data==key){
        cout<< "Found Key";
        return;
    }
    else{
        SearchRecursion(head->next,key); 
    }
}
void DeleteAtBeg(node * &head){
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
        head=temp->next; 
        delete temp;
    }
}
void DeleteAtEnd(node *&head){
    if(head==NULL){
        return;
    }
    else if(head->next==NULL){
        delete head;
        head= NULL; 
    }
    else{
        node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        node *temp2=temp->next;
        temp->next=NULL;
        delete temp2;
    }
}
void InsertAtEndRecursion(node* &head, int d){
     node *temp=head;
    if(temp->next == NULL){
        node *n= new node(d);
        head->next=n;
        return;
    }
    else{
       InsertAtEndRecursion(temp->next,d); 
    }
}
void ReverseLL(node * &head){
    if(head==NULL || head->next==NULL){
        return;
    }
    node *current=head;
    node *prev=NULL;
    node *n;
    while(current!=NULL){
        n=current->next;
        current->next=prev;
        prev=current;
        current=n;
    }
    head=prev;
    return; 
}
node * LastFifth(node * &head){
    node *h1=head;
    node *h2=head;
    for(int i=1;i<=5;i++){
            h1=h1->next;
        }
    //cout<<h1->data<<endl;
    while(h1->next!=NULL){
        h1=h1->next;
        h2=h2->next; 
    }
    cout<<endl;
    cout<<h2->data<<endl;
    return h2;
}
 void Print(node* head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<endl;
}

 int main(){
	node* head=NULL;

 	int d;
	cin>>d;

 	while(d!=-1){
		InsertAtEnd(head,d);
		cin>>d;
	}
	Print(head);
    //InsertAtEnd(head,23);
   // ReverseLL(head);
    Print(head);
    node *ans= LastFifth(head);
    cout<<ans->data;
    //DeleteAtBeg(head);
    //SearchRecursion(head,3);
    // Search(head,3);
    //DeleteAtEnd(head);
    //Print(head);
	return 0;
} 
