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

void print_linked_list(Node* head){
    Node *tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int fre[100005] = {0};
    int val;
    while (cin >> val)
    {
        if(fre[val]==0){
            fre[val]++;
            insert_at_tail_optimized(head, tail, val);
        }
    }

    print_linked_list(head);
    return 0;
}