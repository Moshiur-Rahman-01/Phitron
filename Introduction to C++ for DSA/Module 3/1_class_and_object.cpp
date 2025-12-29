#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    int b;
    Student a;
    a.roll=2118005;
    a.gpa=4.75;
    char temp[100]="Moshiur";
    strcpy(a.name,temp);

    cout << a.roll << " " << a.name << " " << a.gpa;
    return 0;
}