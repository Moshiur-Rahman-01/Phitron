#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    // while(n--){  error
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // prefix sum
    vector<long long int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    // suffix sum
    vector<int> ss(n);
    ss[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        ss[i] = ss[i + 1] + v[i];
    }

    for(int i=0; i<n; i++){
        if(ss[i]==pre[i]){
            cout << i << endl;
            break;
        }
    }

    return 0;
}