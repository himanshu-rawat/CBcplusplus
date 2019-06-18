#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
node *CreateTree()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    else
    {
        node *temp = new node(data);
        temp->left = CreateTree();
        temp->right = CreateTree();

        return temp;
    }
}
void PreOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        cout << root->data << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
// left root right
void InOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
}
// left right root
void PostOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->data << " ";
    }
}
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main()
{
    node *root = NULL;
    root = CreateTree();
    PreOrder(root);
    cout << endl;
    InOrder(root);
    cout << endl;
    PostOrder(root);
    cout << endl;
}