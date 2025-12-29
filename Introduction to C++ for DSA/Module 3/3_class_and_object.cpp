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
    Student a, b;

    cin.getline(a.name,100);
    cin >> a.roll >> a.gpa;
    cin.ignore();
    // getchar();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.roll << " " << a.name << " " << a.gpa << endl;
    cout << b.roll << " " << b.name << "  " << b.gpa << endl;
    return 0;
}