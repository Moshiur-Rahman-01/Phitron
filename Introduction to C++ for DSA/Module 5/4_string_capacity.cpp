#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    cout << s.size() << endl; // 5
    cout << s.max_size() << endl;   // 10^6
    cout << s.capacity() << endl;   // 15
    s.clear();     // string e ja ache shob delete hoye jai
    cout << s.size() << endl; // 0
    cout << s.empty() << endl; // 1

    string ss = "Hello World";
    // ss.resize(17);
    ss.resize(17,'x');
    cout << ss << endl;
    cout << ss.size() << endl; // 17
    return 0;
}