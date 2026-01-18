#include <bits/stdc++.h>
using namespace std;
class Student
{
    public: 
    string name;
    int roll;
    Student(string name, int roll){
        this->name = name;
        this->roll = roll;
    }
    void hello(){
        cout << "Hello from " << name << endl;
    }
};
int main()
{
    Student Moshiur("Moshiur Rahman", 24);
    cout << Moshiur.name << endl;
    Moshiur.hello();
    Student Riad("Riad",45);
    Riad.hello();
    return 0;
}