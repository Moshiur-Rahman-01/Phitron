#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    int length = strlen(s);
    int fre[128] = {0};
    for (int i = 0; i < length; i++)
    {
        int inx = s[i];
        fre[inx]++;
    }
    for (int i = 0; i < 128; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c - %d\n", i, fre[i]);
        }
    }
    return 0;
}