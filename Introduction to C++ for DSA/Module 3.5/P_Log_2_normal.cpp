#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int count =0; 
    while (n>=2){
        n/=2;
        count++;
    }
    
    cout << count;
    return 0;
}