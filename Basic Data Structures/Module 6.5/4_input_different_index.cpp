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

int list_size(Node* head){
    int count = 0;
    Node *tmp = head;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_at_head(Node *&head,Node* &tail, int val){
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
void print_linked_list(Node* head){
    Node *tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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
        insert_at_tail_optimized(head,tail,val);
    }
    int q;
    cin >> q;
    while(q--){
        int idx, val;
        cin >> idx >> val;

        int size = list_size(head);

        if(idx < 0 || idx > size){
            cout << "Invalid" << endl;
        }
        else{
            if(idx == 0){
                insert_at_head(head,tail,val);
                print_linked_list(head);
            }
            else if(idx == size){
                insert_at_tail_optimized(head, tail,val);
                print_linked_list(head);
            }
            else{
                insert_at_any_position(head,idx,val);
                print_linked_list(head);
            }
        }
    }
    return 0;
}