#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Moshiur";
    cout << s[0] << endl; // M            use korbo
    cout << s.at(1) << endl; // o
    cout << s.back() << endl; // r        use korbo
    cout << s[s.size()-1] << endl; // r
    cout << s.front() << endl; // R       s[0]
    return 0;
}