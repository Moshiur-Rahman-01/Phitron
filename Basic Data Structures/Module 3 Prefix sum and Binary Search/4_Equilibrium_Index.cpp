#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    // while(n--){  error
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i=0; i<n; i++){
        int lower_sum = 0, upper_sum = 0;
        for(int j=0; j<i; j++){
            lower_sum += v[j];
        }
        for (int j = i+1; j < n; j++)
        {
            upper_sum += v[j];
        }
        // cout << i << " " << lower_sum << " " << upper_sum << endl;
        if(lower_sum == upper_sum){
            cout << i << endl;
            break;
        }
    }  
    return 0;
}