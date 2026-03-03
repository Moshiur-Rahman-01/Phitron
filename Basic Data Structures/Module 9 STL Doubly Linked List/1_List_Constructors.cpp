#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Rule - 1
    // list<int> l;
    // cout << l.size() << endl; // 0

    // Rule - 2
    // list<int> l(10);
    // cout << l.size() << endl; // 10

    // Rule - 3
    // list<int> l(10,3);
    // for(auto it = l.begin(); it != l.end(); it++){
    //     cout << *it << endl;
    // }
    // for(int val : l){
    //     cout << val << endl;
    // }

    // Rule - 4
    // list<int> l = {1,2,3,4,5};
    // list<int> l2(l);
    // for(int val : l2){
    //     cout << val << endl;
    // }

    // Rule - 5
    // int a[] = {1, 2, 3, 4, 5};
    // list<int> l2(a,a+5);
    // for (int val : l2)
    // {
    //     cout << val << endl;
    // }

    // Rule - 6
    vector<int> v = {1, 2, 3, 4, 5};
    list<int> l2(v.begin(),v.end());
    for (int val : l2)
    {
        cout << val << endl;
    }
    return 0;
}