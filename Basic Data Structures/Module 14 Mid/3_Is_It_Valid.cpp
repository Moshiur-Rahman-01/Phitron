#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int length = str.size();
        stack<char> st;
        for (int i = 0; i < length; i++)
        {
            if (st.empty())
            {
                st.push(str[i]);
            }
            else if (st.top() == '0' && str[i] == '1')
            {
                st.pop();
            }
            else if (st.top() == '1' && str[i] == '0')
            {
                st.pop();
            }
            else
            {
                st.push(str[i]);
            }
        }

        if (st.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}