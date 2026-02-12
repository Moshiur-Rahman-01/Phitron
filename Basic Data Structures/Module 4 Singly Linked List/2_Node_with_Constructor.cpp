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
int main()
{
    // static declaration 
    Node a(10), b(15), c(35);
    a.next = &b;
    b.next = &c;

    cout << a.val << endl;
    cout << a.next->val << endl;       // b.val
    cout << a.next->next->val << endl; // c.val
    return 0;
}