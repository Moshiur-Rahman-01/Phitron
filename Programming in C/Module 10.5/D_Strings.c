#include <stdio.h>
#include<string.h>
int main()
{
    char s1[11],s2[11];
    scanf("%s %s",&s1,&s2);
    int l1=strlen(s1);
    int l2=strlen(s2);
    printf("%d %d\n",l1,l2);
    // char s3[21];
    // for(int i=0; i<l1; i++){
    //     s3[i]=s1[i];
    // }
    // for (int i = 0; i < l2; i++)
    // {
    //     s3[i+l1] = s2[i];
    // }
    // for (int i = 0; i < l1+l2; i++)
    // {
    //     printf("%c",s3[i]);
    // }
    // printf("\n");
    // printf("%c",s2[0]);
    // for(int i=1; i<l1; i++){
    //     printf("%c",s1[i]);
    // }
    // printf(" %c",s1[0]);
    // for (int i = 1; i < l2; i++)
    // {
    //     printf("%c", s2[i]);
    // }
    printf("%s%s\n",s1,s2);
    char a=s1[0];
    char b=s2[0];
    s1[0]=b;
    s2[0]=a;
    printf("%s %s",s1,s2);
    return 0;
}