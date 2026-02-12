#include <bits/stdc++.h>
using namespace std;
int main()
{
    // type 1
    // vector<int> v = {1,2,3,4,5};
    // vector<int> v2;
    // v2 = v;
    // // for(int i=0; i<v2.size(); i++){
    // //     cout << v2[i] << " ";
    // // }
    // for(int x : v2){
    //     cout << x << " ";
    // }

    // type 2
    // vector<int> v = {1, 2, 3, 4, 5};
    // v.push_back(6);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // type 3
    // vector<int> v = {1, 2, 3, 4, 5};
    // v.pop_back();
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // type 4
    // vector<int> v = {1, 2, 3, 4, 5};
    // // v.insert(position,value);
    // // v.insert(v.begin()+2,100);
    // vector<int> v2 = {100,200,300};
    // v.insert(v.begin()+2,v2.begin(),v2.end());
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // type 5
    // vector<int> v = {1,2,3,4,5,6};
    // // v.erase(v.begin()+2);
    // v.erase(v.begin()+1,v.begin()+5);
    // for(int x : v){
    //     cout << x << " ";
    // }

    // type 6
    // vector<int> v = {1, 2, 3, 2, 5, 2};
    // replace(v.begin(),v.end(),2,100);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // type 7
    vector<int> v = {1, 2, 3, 2, 5, 2};
    // vector<int> :: iterator it = find(v.begin(), v.end(),100);
    auto it = find(v.begin(), v.end(),100);
    // cout << *it << endl;
    if(it==v.end()){
        cout << "Not found";
    }
    else{
        cout << "Found";
    }
    return 0;
}