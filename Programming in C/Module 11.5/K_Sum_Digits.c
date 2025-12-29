#include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(int i=0; i<n; i++){
        // printf("%d ",s[i]);
        int a=s[i]-48;
        sum+=a;
    }
    printf("%d",sum);
    return 0;
}