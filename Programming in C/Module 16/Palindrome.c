#include <stdio.h>
#include<string.h>
int is_palindrome(char s[]){
    int length = strlen(s);
    // printf("%d",length);
    for(int i=0,j=length-1; i<j; i++,j--){
        if(s[i]!=s[j]) return 0;
    }
    return 1;
}
int main()
{
    char s[1001];
    scanf("%s",s);
    int result = is_palindrome(s);
    if(result==1)
        printf("Palindrome"); 
    else
        printf("Not Palindrome");
    return 0;
}