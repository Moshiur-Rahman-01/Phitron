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
    int fre[101] = {0};
    int val;
    while (cin >> val)
    {
        fre[val]++;
        insert_at_tail_optimized(head,tail,val);
    }
    for(int i=0; i<101; i++){
        if(fre[i]>1){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}