#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Rule - 1
    // list<int> l1 = {10,20,30};
    // list<int> l2;
    // l2 = l1;
    // l2.assign(l1.begin(),l1.end());
    // for(int val : l2){
    //     cout << val << endl;
    // }

    // Rule - 2
    // list<int> l = {10,20,30};
    // l.push_back(100);
    // l.push_front(100);
    // for(int val : l){
    //     cout << val << endl;
    // }

    // Rule - 3
    // list<int> l = {10, 20, 30};
    // l.pop_back();
    // l.pop_front();
    // for (int val : l)
    // {
    //     cout << val << endl;
    // }

    // Rule - 4
    // list<int> l = {10, 20, 30};
    // cout << *next(l.begin(), 1);

    // Rule - 5
    // list<int> l = {10, 20, 30};
    // // l.insert(next(l.begin(), 2),100);
    // // list<int> l2 = {100,200};
    // // l.insert(next(l.begin(), 2),l2.begin(),l2.end());
    // vector<int> v = {100, 200};
    // l.insert(next(l.begin(), 2), v.begin(), v.end());
    // for (int val : l)
    // {
    //     cout << val << endl;
    // }

    // Rule - 6
    // list<int> l = {10, 20, 30,40,50,60};
    // l.erase(next(l.begin(), 2), next(l.begin(), 5));
    // for (int val : l)
    // {
    //     cout << val << endl;
    // }

    // Rule - 7
    // list<int> l = {10,20,30,40,20,20,70};
    // replace(l.begin(),l.end(),20,100);
    // for (int val : l)
    // {
    //     cout << val << endl;
    // }

    // Rule - 8
    list<int> l = {10, 20, 30, 40, 20, 20, 70};
    auto it = find(l.begin(),l.end(),20);
    if(it == l.end()){
        cout << "Not Found";
    }
    else{
        cout << "Found";
    }
    return 0;
}