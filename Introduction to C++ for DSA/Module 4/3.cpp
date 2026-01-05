#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];
    while (cin.getline(s,100001))
    {
        int count[26] ={0};
        int length = strlen(s);
        for(int i=0; i<length; i++){
            if(s[i]>='a' && s[i]<='z'){
                count[s[i] - 'a']++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            while (count[i]--)
            {
                cout << char(i + 'a');
            }
        }
        cout << "\n";
    }
    return 0;
}