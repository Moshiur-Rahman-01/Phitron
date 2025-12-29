#include <stdio.h>
#include<string.h>
int main()
{
    char s1[1001],s2[1001];
    scanf("%s %s",s1,s2);
    int l1=strlen(s1);
    int l2=strlen(s2);
    printf("%d %d\n%s %s",l1,l2,s1,s2);
    return 0;
}