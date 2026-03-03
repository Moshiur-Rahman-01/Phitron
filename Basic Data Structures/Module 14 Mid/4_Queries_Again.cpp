#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_head(Node* &head,Node* &tail, int val){
    Node* newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node* &head, Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insert_at_any_position(Node* &head,int idx, int val){
    Node* newnode = new Node(val);
    Node* tmp = head;
    for(int i=1; i<idx; i++){
        tmp =  tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
}

int list_size(Node* head){
    int count = 0;
    Node *tmp = head;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}

void print_forward(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    
    // list<int> l;
    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        int size = list_size(head);

        if (idx < 0 || idx > size)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (idx == 0)
            {
                insert_at_head(head,tail,val);
                cout << "L -> ";
                print_forward(head);
                cout << "R -> ";
                print_backward(tail);
            }
            else if (idx == size)
            {
                insert_at_tail(head,tail,val);
                cout << "L -> ";
                print_forward(head);
                cout << "R -> ";
                print_backward(tail);
            }
            else
            {
                insert_at_any_position(head,idx,val);
                cout << "L -> ";
                print_forward(head);
                cout << "R -> ";
                print_backward(tail);
            }
        }
    }
    return 0;
}