#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1="Hello world";
    string s2="World";
    // s1+=s2;           use korbo
    // s1.append(s2);
    // s1.push_back('a');    last e 'a' hobe
    // s1 += 'B';
    // s2.pop_back();
    // s1 = s2;
    // s1.assign("Gello");
    // s1.erase(2);
    // s2.erase(3,2);    // 3 number index theke 2 ta character delete korbe
    s1.replace(6,5,"Bangladesh");
    // s1.insert(5,"Moshiur");
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}