#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    // int miin = INT_MAX;
    // for(int i=0; i<n; i++){
    //     miin = min(a[i].marks,miin);
    // }
    // cout << miin << endl; 

    Student miin;
    miin.marks = INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i].marks < miin.marks) miin = a[i];
    }
    cout << miin.name << " " << miin.roll << " " << miin.marks << endl;
    return 0;
}

/*
6
sakib 15 89
rakib 18 78
akib 28 75
sifat 24 92
rifat 23 95
ifat 17 86
*/