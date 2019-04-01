#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
node *BuildTree(){
     int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    else{
        node *n=new node(data);
        n->left=BuildTree();
        n->right=BuildTree();
    }
}
void PreOrder(node *root){
    if(root==NULL){
        return;
    }
    else{
        cout<<root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
void InOrder(node *root){
    if(root==NULL){
        return;
    }
    else{
        InOrder(root->left);
        cout<<root->data<<" ";
        InOrder(root->right);
    }
}
void PostOrder(node *root){
    if(root==NULL){
        return;
    }
    else{
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<" ";
    }
}
int count(node *root){
    if(root==NULL){
        return 0;
    }
    return 1+count(root->left)+count(root->right);
}
int height(node *root){
    if(root==NULL){
        return 0;
    }
    else{
        int left=height(root->left);
        int right=height(root->right);
        return 1+max(left,right);
    }
}
int main(){
    node *root=NULL;
    root= BuildTree();
    PreOrder(root);
    cout<<endl;
    InOrder(root);
    cout<<endl;
    PostOrder(root);
    cout<<endl;
    cout<<"Number of Nodes :"<<count(root)<<endl;
    cout<<"Height of Tree is :"<<height(root)<<endl;
    return 0;
}