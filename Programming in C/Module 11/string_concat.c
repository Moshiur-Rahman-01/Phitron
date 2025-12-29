#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int Alength = strlen(a);
    int Blength = strlen(b);
    for (int i = 0; i <= Blength; i++)
    {
        a[i+Alength] = b[i];
    }
    // strcat(a,b);
    printf("%s %s", a, b);
    return 0;
}