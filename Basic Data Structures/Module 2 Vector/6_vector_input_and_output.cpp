#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // // int a[n];
    // size bole dewa thakle...
    // vector<int> v(n);
    // for(int i=0; i<n; i++){
    //     cin >> v[i];
    // }

    // size bole dewa na thakle...
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    // for(auto it = v.begin(); it<v.end(); it++){
    //     cout << *it << endl;
    // }
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    for(int x : v){
        cout << x << endl;
    }
    return 0;
}