#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s, x;
        cin >> s >> x;

        int index = s.find(x);
        while(index != string :: npos){
            s.replace(index, x.size(), "#");
            index = s.find(x, index + 1);
        }
        cout << s << endl;
    }
    return 0;
}