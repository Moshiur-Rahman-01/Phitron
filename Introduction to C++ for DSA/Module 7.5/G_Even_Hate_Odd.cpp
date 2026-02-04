#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 == 1)
            cout << "-1\n";
        else
        {
            int e = 0, o = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                    e++;
                else
                    o++;
            }
            int temp = n / 2;
            int result = abs(temp - e);
            cout << result << endl;
        }
    }
    return 0;
}