#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int x,y,n;
        cin >> x >> y >> n;
        int result = x - y*n;
        if(result < 0) cout << 0 << endl;
        else cout << result << endl;
    }
    return 0;
}