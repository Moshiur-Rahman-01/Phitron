#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
// sort of descending order with roll
bool cmp(Student l, Student r)
{
    if(l.marks == r.marks){
        return l.roll < r.roll;
    }
    else{
        return l.marks > r.marks;
    }
    // Tarnary operator
    // return (l.marks==r.marks) ? l.roll<r.roll : l.marks>r.marks;
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
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