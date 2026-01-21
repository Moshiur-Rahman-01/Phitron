#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int r1 = s[0] - '0' + s[1] - '0' + s[2] - '0';
        int r2 = s[3] - '0' + s[4] - '0' + s[5] - '0';

        if (r1 == r2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}