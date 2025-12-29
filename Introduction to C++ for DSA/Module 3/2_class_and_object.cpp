#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    Student a,b;
    // a.roll = 2118005;
    // a.gpa = 4.75;
    // char temp[100] = "Moshiur";
    // strcpy(a.name, temp);

    cin >> a.name >> a.roll >> a.gpa;
    cin >> b.name >> b.roll >> b.gpa;
    
    cout << a.roll << " " << a.name << " " << a.gpa << endl;
    cout << b.roll << " " << b.name << " " << b.gpa << endl;
    return 0;
}