#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // int e=0,g=0,y=0,p=0,t=0;
    int fre[26] = {0};
    for(int i=0; i<s.size(); i++){
        char ch = tolower(s[i]);
        int index = ch - 'a';
        fre[index]++;

        // if(s[i]=='e' || s[i] == 'E') e++;
        // else if(s[i]=='g' || s[i] == 'G') g++;
        // else if(s[i]=='y' || s[i] == 'Y') y++;
        // else if(s[i]=='p' || s[i] == 'P') p++;
        // else if(s[i]=='t' || s[i] == 'T') t++;
    }
    
    // int result = min({e,g,y,p,t});
    int result = min({fre['e'-'a'],fre['g'-'a'],fre['y'-'a'],fre['p'-'a'],fre['t'-'a']});
    cout << result;
    return 0;
}