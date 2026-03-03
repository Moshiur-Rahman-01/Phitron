#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail_optimized(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int list_size(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void delete_at_head(Node* &head){
    Node* deletenode = head;
    head = head->next;
    delete deletenode;
}

void delete_at_tail(Node *head,Node* &tail, int idx)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

            if (idx == 0)
            {
                insert_at_head(head, tail, val);
                print_linked_list(head);
            }
            else if (idx == 1)
            {
                insert_at_tail_optimized(head, tail, val);
                print_linked_list(head);
            }
            else if(idx == 2)
            {
                int size = list_size(head);
                if(size<val+1){
                    print_linked_list(head);
                }
                else{
                    if(val == 0){
                        delete_at_head(head);
                        print_linked_list(head);
                    }
                    else if(val+1 == size){
                        delete_at_tail(head,tail,val);
                        print_linked_list(head);
                    }
                    else{
                        delete_at_any_position(head, val);
                        print_linked_list(head);
                    }
                    
                }
            }
    }
    return 0;
}