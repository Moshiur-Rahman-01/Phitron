#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Rule - 1
    // list<int> l;
    // cout << l.size(); // 0

    // Rule - 2
    // list<int> l;
    // cout << l.max_size(); // garbase value

    // Rule - 3
    // list<int> l = {1,2,3,4};
    // l.clear();
    // cout << l.size() << endl;
    // for(int val : l){
    //     cout << val << endl;
    // }

    // Rule - 4
    // list<int> l = {1,2};
    // if(l.empty()) cout << "Yes";
    // else cout << "No";

    // Rule - 5
    list<int> l = {1,2,3,4,5};
    l.resize(3); // size 3 hobe
    l.resize(7); // size bere jabe & baki gulo 0 hobe
    l.resize(8,5); // size barbe & baki gulo 5 hobe
    return 0;
}