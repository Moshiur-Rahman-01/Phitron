#include <stdio.h>
#include<string.h>
int main()
{
    char s[10000001];
    scanf("%s",s);
    // int fre[26]={0};
    int fre[128]={0};
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        char letter=s[i];
        // fre[letter-97]++;
        fre[letter]++;
    }
    // for(int i=0; i<26; i++){
    for(int i=0; i<128; i++){
        if(fre[i]>0){
            // printf("%c : %d\n",i+97,fre[i]);
            printf("%c : %d\n",i,fre[i]);
        }
    }
    return 0;
}