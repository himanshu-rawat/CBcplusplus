#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d):data(d),next(NULL){
       // cout<<"Data "<<data<<endl;

    }
};
class LinkedList{
    public: 
    Node *head=NULL; 
    Node *tail=NULL;
    void DeleteAtFront(){
        Node *temp;
        if(head==NULL){
            return;
        }
        else if(head->next== NULL){
            delete head;
            head=tail=NULL;
        }
        else{

            temp=head->next;
            delete head;
            head->next=temp;
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
                tail->next=NULL; 
            }
    }
    void DeleteAtMid(int pos){
        if(pos==0){
            DeleteAtFront();
        }
        else if(pos<=0){
            DeleteAtEnd();
        } 
        else{
            Node *temp =head;
            Node *n=new Node(pos);
            int jump=1;
            while(jump<=pos-1){
                temp=temp->next;
                jump++;
            }
            // n->next=temp->next;
            // temp->next=n;
            temp->next=n->next;
            delete n;

        }

    }
 
    void InsertAtFront(int d){
        if(head==NULL){
            Node *n =new Node(d);
            head=tail=n;

        }
        else{
            Node *n =new Node(d);
            n->next=head;
            head=n;
        }
    }
    void InsertAtEnd(int d){
        if(head==NULL){
            Node *n =new Node(d);
            tail=head=n;
        }
        else{
            Node *n=new Node(d);
            tail->next=n;
            tail=n;
        }
    }
    void InsertAtMid(int d,int pos){
        if(pos==0){
            InsertAtFront(d);
        }
        else if(pos<=0){
            InsertAtEnd(d);
        }
        else{
            Node *temp =head;
            Node *n=new Node(d);
            int jump=1;
            while(jump<=pos-1){
                temp=temp->next;
                jump++;
            }
            n->next=temp->next;
            temp->next=n;

        }
    }
    // int FindKey(int key){
    //     Node *temp=head;
    //     int count=0;
    //     while(temp!=NULL){
    //         if(temp->data==key){
    //             count++;
    //             cout<<endl<<"Key Found at Index "<<count;
    //         }
    //         temp=temp->next;
           
    //     }

    // }
    Node *search(int key){
        Node *temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                return temp;
            }
            temp=temp->next;
        }
        return NULL;
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

    LinkedList l;
    l.InsertAtEnd(0);
    l.InsertAtEnd(1);
    l.InsertAtEnd(2);
    l.InsertAtEnd(4);
    l.print();
    l.DeleteAtFront();
     l.print();
    return 0;
}