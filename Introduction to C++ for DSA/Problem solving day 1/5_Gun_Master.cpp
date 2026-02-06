#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int initial = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > d && flag == false)
            {
                initial++;
                flag = true;
            }
            if (a[i] <= d && flag == true)
            {
                initial++;
                flag = false;
            }
        }
        cout << initial << endl;
    }
}
