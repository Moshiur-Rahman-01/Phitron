#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
            cin >> b[i];

        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i];

        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
            mn = min(mn, a[i] - b[i]);

        cout << sum - mn << endl;
    }
}
