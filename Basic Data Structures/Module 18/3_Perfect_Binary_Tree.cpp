#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *right;
    Node *left;
    Node(int val)
    {
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *p = q.front();
        q.pop();

        // 2. oi node k niye kaj
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children push kora
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

bool perfect_Binary_Tree(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    
        if ((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL))
        {
            return false;
        }

        bool l = perfect_Binary_Tree(root->left);
        bool r = perfect_Binary_Tree(root->right);
    return l && r;
}

int main()
{
    Node *root = input_tree();
    bool r = perfect_Binary_Tree(root);
    if(r) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}