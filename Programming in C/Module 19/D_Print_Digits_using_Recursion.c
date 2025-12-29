#include <stdio.h>
void digit(int n){
    if(n==0) return;
    digit(n / 10);
    int last = n%10;
    printf("%d ",last);
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d", &n);
        if(n==0) printf("0");
        digit(n);
        printf("\n");
    }
    return 0;
}