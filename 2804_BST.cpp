#include <iostream>
#include <queue>
#include <cmath>
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
node *InsertBST(node *root, int data)
{
    if (root == NULL)
    {
        node *root = new node(data);
        return root;
    }
    if (root->data >= data)
    {
        root->left = InsertBST(root->left, data);
    }
    else
    {
        root->right = InsertBST(root->right, data);
    }
    return root;
}
node *CreateBST()
{
    node *root = NULL;
    int data;
    cin >> data;
    while (data != -1)
    {
        root = InsertBST(root, data);
        cin >> data;
    }
    return root;
}

node *SearchInBST(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    if (root->data >= key)
    {
        return SearchInBST(root->left, key);
    }
    else
    {
        return SearchInBST(root->right, key);
    }
}
void IsInRange(node *root, int r1, int r2)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        if (root->data >= r1 && root->data <= r2)
        {
            cout << root->data << " ";
            IsInRange(root->left, r1, r2);
            IsInRange(root->right, r1, r2);
        }
    }
}
void LevelOrder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
//Read About AVL and BLack Something Tree
class Pair
{
public:
    int height;
    bool balanced;
};
Pair IsBalanced(node *root)
{
    Pair p;
    if (root == NULL)
    {
        p.balanced = true;
        p.height = 0;
        return p;
    }
    Pair left = IsBalanced(root->left);
    Pair right = IsBalanced(root->right);

    p.height = max(left.height, right.height) + 1;

    if (left.balanced && right.balanced && (abs(left.height - right.height) <= 1))
    {
        p.balanced = true;
    }
    else
    {
        p.balanced = false;
    }
    return p;
}
// node * BSTusingArray(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     int mid=(start+end)/2;

// }
class LinkedList
{
public:
    LinkedList *left;
    LinkedList *right;
};
LinkedList BSTtoLL(node *root)
{
    LinkedList l;
    if (root == NULL)
    {
        ;
    }
    // 4 Case

    if (root->left == NULL && root->right != NULL)
    {
        LinkedList l;
    }
    if (root->left != NULL && root->right == NULL)
    {
    }
    if (root->left == NULL && root->right == NULL)
    {
    }
    if (root->left != NULL && root->right != NULL)
    {
    }
}
int main()
{
    node *root = NULL;
    root = CreateBST();
    //LevelOrder(root);
    IsInRange(root, 3, 10);
    Pair pp = IsBalanced(root);
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);
}