#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int h,x,y;
        cin >> h >> x >> y;
        int step1 = h-y;
        int result1 = ceil((double)step1/x);
        int result2 = ceil((double)h/x);
        if(result1+1<=result2) cout << result1+1 << endl;
        else cout << result2 << endl;
    }
    return 0;
}