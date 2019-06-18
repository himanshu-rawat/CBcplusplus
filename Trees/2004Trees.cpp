#include <iostream>
#include <queue>
using namespace std;
class Node
{
  public:
    int data;
    Node *left;
    Node *right;

    Node(int d) : data(d), left(NULL), right(NULL)
    {
    }
};

Node *BuildTree()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    else
    {
        Node *n = new Node(data);
        n->left = BuildTree();
        n->right = BuildTree();
        return n;
    }
}

void PreOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

void PostOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

int CountNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return 1 + CountNodes(root->left) + CountNodes(root->right);
}
int Height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = Height(root->left);
    int right = Height(root->right);
    return 1 + max(left, right);
}
void LevelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
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

void Mirror(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    swap(root->left, root->right);
    Mirror(root->left);
    Mirror(root->right);
}
int Diameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int opt1 = Height(root->left) + Height(root->right);
    int opt2 = Diameter(root->left);
    int opt3 = Diameter(root->right);
    return max(opt1, max(opt2, opt3));
}
class Pair
{
  public:
    int height;
    int diameter;
};
Pair fastDiameter(Node *root)
{
    Pair p;
    if (root == NULL)
    {
        p.height = p.diameter = 0;
        return p;
    }
    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);

    p.height = max(left.height, right.height);

    int opt1 = left.height + right.height;
    int opt2 = left.diameter;
    int opt3 = right.diameter;

    p.diameter = max(opt1, max(opt2, opt3));

    return p;
}
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main()
{
    Node *root = NULL;
    root = BuildTree();
    PreOrder(root);
    cout << endl;
    InOrder(root);
    cout << endl;
    PostOrder(root);
    cout << endl;
    cout << "No of Nodes: " << CountNodes(root) << endl;
    cout << "Height of Node: " << Height(root) << endl;
    cout << " Diameter of Tree: " << Diameter(root) << endl;
    Pair p = fastDiameter(root);
    cout << "Height of Tree Fast: " << p.height << endl;
    cout << "Diameter of Tree Fast: " << p.diameter << endl;
    cout << "Level Order" << endl;
    LevelOrder(root);
    cout << endl;
    Mirror(root);
    LevelOrder(root);
    return 0;
}