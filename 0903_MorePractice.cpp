#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
class LinkedList{
    public:
    Node *head;
    Node *tail;
    LinkedList(){
        head=NULL;
        tail=NULL;
    }
    void InsertAtFront(int d){
        if(head==NULL){
            Node *n=new Node(d);
            head=tail=n;   
        }
        else{
            Node *n=new Node(d);
            n->next=head;
            head=n;
        }
    }
    void InsertAtEnd(int d){
        if(head==NULL){
            Node *n =new Node(d);
            head=tail=n;
        }
        else{
           Node *n =new Node(d);
           tail->next=n;
           tail=n;  
        }
    }
    void InsertAtMid(int d,int pos){
        if(pos<=0){
            InsertAtFront(d);
        }
        else if(pos>=length()){
            InsertAtEnd(d);
        }
        else{
            Node *temp=head;
            int jump=1;
            while(jump<pos-1){
                temp=temp->next;
                jump++;
            }
            Node *n= new Node(d);
            n->next=temp->next;
            temp->next=n;
        }
    }
    void DeleteAtFront(){
        if(head==NULL){
            return;
        }
        else if(head->next==NULL){
            delete head;
            head=tail=NULL;
        }
        else{
            Node *temp=head;
           
            head=head->next;
            delete temp;

            // delete head;
            // head=temp->next;

        }
    }
    void DeleteAtEnd(){
        if(head==NULL){
            return;
        }
        else if(head->next==NULL){
            delete head;
            head=tail=NULL;
        }
        else{
            Node *temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            delete tail;
			tail=temp;
            //cout<<tail->data<<" "<<tail->next<<endl;
			tail->next=NULL;
            //cout<<"After "<<tail->next<<endl;
        }

    }
    void DeleteAtMid(int pos){
        if(pos<=0){
            DeleteAtFront();
        }
        else if(pos>=length()){
            DeleteAtEnd();
        }
        else{
            int jump=1;
            Node *temp=head;
            while(jump<pos-1){
               temp=temp->next;
               jump++;
            }
           
            Node* n=temp->next;
			temp->next=n->next;
			delete n;
        }
    }
    Node * search(int key){
        Node *temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                return temp;
            }
            temp=temp->next;
        }
        return NULL;
    }
    int  length(){
        Node *temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    void print(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};
int main(){
    LinkedList L1;
    L1.InsertAtEnd(11);
    L1.InsertAtEnd(12);
    L1.InsertAtEnd(13);
    L1.InsertAtEnd(14);
    L1.print();
    Node* ans=L1.search(13);
	if(ans==NULL){
		cout<<"Key not Found!"<<endl;
	}
	else{
		cout<<ans->data<<endl;
		// cout<<ans->next->data<<endl;
		ans->next=NULL;
	}
    return 0;
}