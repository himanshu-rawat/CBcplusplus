#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *NextNode;

    Node(int d){
        data=d;
        NextNode=NULL;

    }

};
void InsertNodeAtHead(Node * &startNode, int data){
    Node *n=new Node(data); 
    n->NextNode=startNode; 
    startNode=n;  
}
void InsertNodeAtTail(Node * &startNode, int data){
    Node *n=new Node(data);  
    startNode=n;  
}
void PrintNodes(Node *startNode){
    Node *temp =startNode; 
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->NextNode;
    }
}
int main(){
    Node *StartNode = NULL;
    InsertNodeAtHead(StartNode,5);
    InsertNodeAtHead(StartNode,3);
    InsertNodeAtHead(StartNode,1);
    InsertNodeAtHead(StartNode,12);
    InsertNodeAtHead(StartNode,12);
    PrintNodes(StartNode);
}