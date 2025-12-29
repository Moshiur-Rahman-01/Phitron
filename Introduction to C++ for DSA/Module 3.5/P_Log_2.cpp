#include <bits/stdc++.h>
using namespace std;
int lg(long long int n){
    if(n==1) return 0;
    return 1+lg(n/2);
}
int main()
{
    long long int n;
    cin >> n;
    int result = lg(n);
    cout << result;
    return 0;
}