#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[10001];
    while (n--)
    {
        scanf("%s", s);
        int length = strlen(s);
        int fre[3] = {0};
        for (int i = 0; i < length; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                fre[0]++;
            else if (s[i] >= 'a' && s[i] <= 'z')
                fre[1]++;
            else
                fre[2]++;
        }
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", fre[i]);
        }
        printf("\n");
    }

    return 0;
}