#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {20,30,10,50,30,60,60,10};
    // Rule - 1
    // l.remove(10);

    // Rule - 2
    // l.sort();

    // Rule - 3
    // l.sort(greater<int>());

    // Rule - 4 sorted thakte hobe
    // l.sort();
    // l.unique();

    // Rule - 5
    l.reverse();
    for(int val : l){
        cout << val << endl;
    }
    return 0;
}