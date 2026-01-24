#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // for(int i=0; i<s.size(); i++){
    //     if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T'){
    //         cout << " ";
    //         i += 4;
    //     }
    //     else{
    //         cout << s[i];
    //     }
    // }

    int index = s.find("EGYPT");
    // while(index != -1){
    while(index != string :: npos){
        s.replace(index,5," ");
        index = s.find("EGYPT", index+1);
    }
    cout << s;
    return 0;
}