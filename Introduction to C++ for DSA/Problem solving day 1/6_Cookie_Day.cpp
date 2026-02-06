#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int flag = 0;
        int minimum = INT_MAX;
        for(int i=0; i<n; i++){
            if(a[i]>=k){
                flag = 1;
                // int rem = a[i]%k;
                // if(minimum>rem) minimum=rem;
                minimum = min(a[i]%k,minimum);
            }
        }
        if(flag) cout << minimum << endl;
        else cout << "-1\n";
        // if(minimum==INT_MAX) cout << -1 << endl;
        // else cout << minimum << endl;
    }
    return 0;
}