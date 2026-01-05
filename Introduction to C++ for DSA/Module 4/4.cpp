#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;
};
int main()
{
    int t;
    cin >> t;
while(t--){
    Student s[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> s[i].id >> s[i].name >> s[i].section >> s[i].total_marks;
    }

    Student topper = s[0];

    for (int i = 1; i < 3; i++)
    {
        if (s[i].total_marks > topper.total_marks)
        {
            topper = s[i];
        }
        else if (s[i].total_marks == topper.total_marks)
        {
            if (s[i].id < topper.id)
            {
                topper = s[i];
            }
        }
    }

    cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.total_marks << "\n";
}

    return 0;
}