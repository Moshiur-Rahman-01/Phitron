#include <bits/stdc++.h>
using namespace std;
void func(int a[],int n){

    int b[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            b[j++] = a[i];
        }
    }
    for (int i = j; i < n; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    func(a,n);
    
    return 0;
}