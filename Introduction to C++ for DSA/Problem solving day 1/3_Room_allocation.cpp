#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            // sum += ceil((double)a[i]/2);
            sum += a[i] / 2;
            if (a[i] % 2 == 1)
                sum++;
        }
        cout << sum << endl;
    }
}
