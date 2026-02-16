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

void print_linked_list(Node* head,int mid){
    Node *tmp = head;
    int i=1;
    while(tmp != NULL){
        if(i==mid){
            cout << tmp->val << endl;
        }
        tmp = tmp->next;
        i++;
    }
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
        int size = list_size(head);
        // cout << size << endl;
        if(size%2==1){
            int mid = (size+1)/2;
            print_linked_list(head,mid);
        }
        else{
            int mid = size/2;
            Node *tmp = head;
            int i = 1;
            while (tmp != NULL)
            {
                if (i == mid)
                {
                    cout << tmp->val << " " << tmp->next->val << endl;
                }
                tmp = tmp->next;
                i++;
            }
        }
    return 0;
}