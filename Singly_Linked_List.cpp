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

void insert_at_head(Node *&head, int val){
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void print_linked_list(Node* head){
    Node *tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

void insert_at_tail(Node *&head, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

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

void insert_at_any_position(Node* &head,int idx, int val){
    Node *newnode = new Node(val);
    Node* tmp = head;
    for(int i=1; i<idx; i++){
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}

void delete_at_head(Node* &head){
    Node* deletenode = head;
    head = head->next;
    delete deletenode;
}

void delete_at_any_position(Node *head, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void delete_at_tail(Node *head, Node *&tail, int idx)
{
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tail = tmp;
}

void list_size(Node* head){
    int count = 0;
    Node *tmp = head;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    cout << count << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    
        int val;
        while(true){
            cin >> val;
            if(val == -1){
                break;
            }
            insert_at_head(head,val);
        }
        // For Input
        // while (cin >> x)
        // {
        //     insert_at_tail(head, tail, x);
        // }
        print_linked_list(head);
    return 0;
}