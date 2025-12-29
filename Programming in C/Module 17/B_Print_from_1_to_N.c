#include <stdio.h>
void test(int i,int n)
{

    if (n+1 == i)
        return;
    printf("%d\n",i);
    test(i + 1,n);
}
int main()
{
    int n,i=1;
    scanf("%d", &n);
    test(i,n);
    return 0;
}