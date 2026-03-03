#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st,new_st;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        st.push(val);
    }
    while(!st.empty()){
        new_st.push(st.top());
        st.pop();
    }
    while(!new_st.empty()){
        cout << new_st.top() << " ";
        new_st.pop();
    }
    return 0;
}