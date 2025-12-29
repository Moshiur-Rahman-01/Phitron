#include <stdio.h>
void test(int n)
{

    if (n==0)
        return;
    printf("%d",n);
    if(n>1) printf(" ");
    test(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    test(n);
    return 0;
}