#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int fre[26] = {0};
        for(int i=0; i<n; i++){
            int idx = s[i] - 'A';
            fre[idx]++;
        }

        int sum = 0;
        for(int i=0; i<26; i++){
            if(fre[i]>0)
            // cout << fre[i] << endl;
            sum += fre[i]+1;
        }
        cout << sum << endl;
    }
    return 0;
}