#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        char s[55], t[55];
        scanf("%s %s", s, t);
        int slength = strlen(s);
        int tlength = strlen(t);
        int i=0,j=0;
        while(i<slength && j<tlength){
            printf("%c%c",s[i],t[j]);
            i++;
            j++;
        }
        while(i<slength){
            printf("%c",s[i]);
            i++;
        }
        while(j<tlength){
            printf("%c",t[j]);
            j++;
        }
        printf("\n");
    }
    return 0;
}