#include <bits/stdc++.h>
using namespace std;
void func(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        func(n, c);
    }
    return 0;
}