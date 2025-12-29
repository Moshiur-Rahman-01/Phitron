#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double d = 23.45676;
    cout << fixed << setprecision(8) << d << endl;
    return 0;
}