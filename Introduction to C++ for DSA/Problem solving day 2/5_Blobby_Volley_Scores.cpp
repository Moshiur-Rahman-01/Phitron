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
        int Alice=0,Bob=0;
        if(s[0]=='A') Alice++;
        for(int i=1; i<n; i++){
            if(s[i-1]=='A' && s[i]=='A'){
                Alice++;
            }
            else if(s[i-1]=='B' && s[i]=='B'){
                Bob++;
            }
        }
        cout << Alice << " " << Bob << endl;
    }
    return 0;
}