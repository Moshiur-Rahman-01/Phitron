#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    int section;
    int math_marks;
    int cls;


    Student(char n[],int r,int s,int m,int c){
        // name = n;
        strcpy(name,n);
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};
int main()
{
    Student s1("Moshiur",2118005,1,80,10);
    Student s2("Riad",2118006,2,85,10);
    Student s3("Nayeem",2118007,3,90,10);
    // cout << s1.name << " " << s1.roll << " ";

    if (s1.math_marks > s2.math_marks && s1.math_marks > s3.math_marks){
        cout << "Maximum Marks: " << s1.name;
    }
    else if (s2.math_marks > s1.math_marks && s2.math_marks > s3.math_marks)
    {
        cout << "Maximum Marks: " << s2.name;
    }
    else{
        cout << "Maximum Marks: " << s3.name;
    }
        return 0;
}


// JOdi kono mark equal hoi......
// Student topper = s1;

// if (topper.math_marks < s2.math_marks)
// {
//     topper = s2;
// }
// else if (topper.math_marks == s2.math_marks)
// {
//     if (topper.roll > s2.roll)
//     {
//         topper = s2;
//     }
// }

// if (topper.math_marks < s3.math_marks)
// {
//     topper = s3;
// }
// else if (topper.math_marks == s3.math_marks)
// {
//     if (topper.roll > s3.roll)
//     {
//         topper = s3;
//     }
// }


// cout << topper.name << endl;
// return 0;


// Using Loop
// #include <bits/stdc++.h>
// // #include <string.h>

// using namespace std;

// class Student
// {
// public:
//     char name[101];
//     // string name;
//     int roll;
//     char section;
//     int math_marks;
//     int cls;

//     // Student(char name[], int roll, char section, int math_marks, int cls)
//     // // Student(string name, int roll, char section, int math_marks, int cls)
//     // {
//     //     // this->name = name;
//     //     strcpy(this->name, name);
//     //     this->roll = roll;
//     //     this->section = section;
//     //     this->math_marks = math_marks;
//     //     this->cls = cls;
//     // }
// };
// int main()
// {
//     int max_mark = -1000;
//     Student topper;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         Student tem_stu;
//         cin >> tem_stu.name >> tem_stu.roll >> tem_stu.section >> tem_stu.math_marks >> tem_stu.cls;

//         // cout << tem_stu.name << " " << tem_stu.roll << " " << tem_stu.section << " " << tem_stu.math_marks << " " << tem_stu.cls << endl;
//         if (max_mark < tem_stu.math_marks)
//         {
//             topper = tem_stu;
//             max_mark = tem_stu.math_marks;
//         }
//         else if (max_mark == tem_stu.math_marks)
//         {
//             if (topper.roll > tem_stu.roll)
//             {
//                 topper = tem_stu;
//             }
//         }
//     }

//     cout << topper.name << " " << topper.roll << " " << topper.cls << " " << topper.math_marks << endl;
//     return 0;
// }

// /*
// 3
// atiq 2 A 80 10
// jahid 1 B 80 10
// Ashik 0 A 80 10
// */