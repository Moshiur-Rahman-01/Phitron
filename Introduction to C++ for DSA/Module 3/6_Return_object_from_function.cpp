#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        (*this).gpa = gpa;
    }
};
Student fun(){
    Student karim(4, 1, 1.4);
    return karim;
}
int main()  
{
    Student rahim(45, 5, 3.4);
    Student obj = fun();
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}