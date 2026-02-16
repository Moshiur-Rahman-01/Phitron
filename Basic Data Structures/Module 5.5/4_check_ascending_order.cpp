#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail_optimized(Node* &head, Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val)
    {
        insert_at_tail_optimized(head,tail,val);
    }
        Node *tmp = head;
        int flag = 1;
        while(tmp->next != NULL){
            if(tmp->val > tmp->next->val){
                cout << "NO\n";
                return 0;
            }
            tmp = tmp->next;
        }
        cout << "YES\n";
    return 0;
}