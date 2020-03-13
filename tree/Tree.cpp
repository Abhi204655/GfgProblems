#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{

public:
    T data;
    Node *left;
    Node *right;
    Node(int x = 0)
    {
        data = x;
        left = right = NULL;
    }
    void PreOrder(Node<T> *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
    void PostOrder(Node<T> *root)
    {
        if (root == NULL)
        {
            return;
        }
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->data << " ";
    }
    void InOrder(Node<T> *root)
    {
        if (root == NULL)
        {
            return;
        }
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
    void BFS()
    {
        queue<Node *> q;
        q.push(this);
        while (!q.empty())
        {
            Node *ele = q.front();
            q.pop();
            cout << ele->data << " ";
            if (ele->left != NULL)
            {
                q.push(ele->left);
            }
            if (ele->right != NULL)
            {
                q.push(ele->right);
            }
        }
    }
    void DFS()
    {
        stack<Node *> s;
        s.push(this);
        while (!s.empty())
        {
            Node *ele = s.top();
            s.pop();
            cout << ele->data << " ";
            if (ele->left != NULL)
            {
                s.push(ele->left);
            }
            if (ele->right != NULL)
            {
                s.push(ele->right);
            }
        }
    }
    int height(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        else
        {
            return 1 + max(height(root->left), height(root->right));
        }
    }
    bool childrenSum(Node *root)
    {
        if (root == NULL)
            return true;
        if (root->left == NULL && root->right == NULL)
            return true;
        int sum = 0;
        if (root->left != NULL)
            sum += root->left->data;
        if (root->right != NULL)
            sum += root->right->data;

        if (sum == root->data && childrenSum(root->left) && childrenSum(root->right))
            return true;
        else
            return false;
    }
    // bool isBalanced(Node *root, int *height)
    // {
    //     if (root == NULL)
    //     {
    //         int lh = 0;
    //         int rh = 0;
    //         *height = 0;
    //         return true;
    //     }
    //     bool lb = isBalanced(root->left, )
    // }
    void printAtK(Node *root, int k)
    {
        if (root == NULL)
            return;

        if (k == 0)
            cout << root->data << " ";

        printAtK(root->left, k - 1);
        printAtK(root->right, k - 1);
    }
    bool isBST(Node *root)
    {
        }
};
int main()
{
    Node<int> *root = new Node<int>(10);
    root->left = new Node<int>(5);
    root->right = new Node<int>(13);
    // root->left->left = new Node<int>(4);
    // root->left->right = new Node<int>(11);
    // root->right->left = new Node<int>(12);
    // root->right->right = new Node<int>(14);
    // root->right->left->left = new Node<int>(32);
    // root->right->left->right = new Node<int>(24);
    cout << "Pre order traversal: ";
    root->PreOrder(root);
    cout << endl;
    cout << "Post order traversal: ";
    root->PostOrder(root);
    cout << endl;
    cout << "In order traversal: ";
    root->InOrder(root);
    cout << endl;
    cout << "BFS traversal: ";
    root->BFS();
    cout << endl;
    cout << "DFS traversal: ";
    root->DFS();
    cout << endl;
    cout << "Height of your tree is : " << root->height(root) << endl;
    root->childrenSum(root) ? cout << "Follow" << endl : cout << "Does not follow" << endl;
    // root->isBalanced(root) ? cout << "Balanced" << endl : cout << "Not Balanced" << endl;
    cout << "Nodes at level 2 are :";
    root->printAtK(root, 2);
    cout << endl;

    root->isBST(root) ? cout << "Your tree is a BST. " << endl : cout << "Your tree is not a BST." << endl;
    return 0;
}