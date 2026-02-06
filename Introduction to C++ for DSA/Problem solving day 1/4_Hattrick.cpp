#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        char a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        if (a == 'W' && b == 'W' && c == 'W')
            cout << "YES\n";
        else if (b == 'W' && c == 'W' && d == 'W')
            cout << "YES\n";
        else if (c == 'W' && d == 'W' && e == 'W')
            cout << "YES\n";
        else if (d == 'W' && e == 'W' && f == 'W')
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
