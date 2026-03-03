#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        int size = l.size();

        if (idx < 0 || idx > size)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (idx == 0)
            {
                l.push_front(val);
                for(int val : l){
                    cout << val << " ";
                }
                cout << endl;
                l.reverse();
                for (int val : l)
                {
                    cout << val << " ";
                }
                cout << endl;
                l.reverse();
            }
            else if (idx == size)
            {
                l.push_back(val);
                for (int val : l)
                {
                    cout << val << " ";
                }
                cout << endl;
                l.reverse();
                for (int val : l)
                {
                    cout << val << " ";
                }
                cout << endl;
                l.reverse();
            }
            else
            {
                l.insert(next(l.begin(), idx), val);
                for (int val : l)
                {
                    cout << val << " ";
                }
                cout << endl;
                l.reverse();
                for (int val : l)
                {
                    cout << val << " ";
                }
                cout << endl;
                l.reverse();
            }
        }
    }
    return 0;
}