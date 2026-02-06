#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int total = 0;
        for(int i=0; i<n; i++){
            total += a[i];
        }
        // if(total%x==0){
        //     cout << total/x << endl;
        // }
        // else{
        //     cout << total/x + 1 << endl;
        // }
        cout << ceil((double)total/x) << endl;
    }
    return 0;
}