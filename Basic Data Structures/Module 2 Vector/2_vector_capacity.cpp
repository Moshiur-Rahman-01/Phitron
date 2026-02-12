#include <bits/stdc++.h>
using namespace std;
int main()
{
    // type 1
    // vector<int> v;
    // cout << v.size() << endl;

    // type 2 lage na
    // vector<int> v;
    // cout << v.max_size() << endl;

    // type 3 lage na
    // vector<int> v;
    // cout << v.capacity() << endl; // 0
    // v.push_back(10);
    // cout << v.capacity() << endl; // 1
    // v.push_back(10);
    // cout << v.capacity() << endl; // 2
    // v.push_back(10);
    // cout << v.capacity() << endl; // 4
    // v.push_back(10);
    // cout << v.capacity() << endl; // 4
    // v.push_back(10);
    // cout << v.capacity() << endl; // 8

    // type 4
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // cout << v.size() << endl;
    // v.clear(); // Clears the vector elements. Do not delete the memory, only clear the value.
    // cout << v.size() << endl;
    // cout << v[1] << endl;

    // type 5
    // vector<int> v;
    // cout << v.empty() << endl;

    // type 6
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl;
    v.resize(2);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    v.resize(4);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.resize(6,100);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}