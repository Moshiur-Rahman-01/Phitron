#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        l.push_back(val);
    }
    list<int> l2(l);
    l2.reverse();
    // for(int val : l2){
    //     cout << val << endl;
    // }
    if (l == l2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}

