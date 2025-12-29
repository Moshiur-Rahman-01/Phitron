#include <stdio.h>
int my_len(char s[])
{
    int lenght=0;
    for(int i=0; s[i]!='\0'; i++){
        lenght++;
    }
    return lenght;
}
int main()
{
    char s[101];
    scanf("%s", s);
    int length = my_len(s);
    printf("%d",length);
    return 0;
}