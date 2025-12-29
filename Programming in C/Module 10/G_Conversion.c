#include <stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",s);
    int length = strlen(s);
    for(int i=0; i<length; i++){
        if(s[i]==','){
            printf(" ");
        }
        else if(s[i]>='a' && s[i]<='z'){
            printf("%c",s[i]-32);
        }
        else{
            printf("%c",s[i]+32);
        }
    }
    return 0;
}