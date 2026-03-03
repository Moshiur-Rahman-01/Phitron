#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1;
    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        l1.push_back(val1);
    }
    vector<int> v1;
    


    list<int> l2;
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        l2.push_back(val2);
    }

    // int size1 = l1.size();
    // int size2 = l2.size();

    // // cout << size1 << " " << size2 << endl;
    // if (size1 != size2)
    // {
    //     cout << "NO\n";
    //     return 0;
    // }
    // Compare both lists
    if (l1 == l2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}