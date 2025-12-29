#include <stdio.h>
void sum(int a, int b)
{
    printf("%d + %d = ", a, b);
    int ans = a + b;
    // return; -> return to line 13
    printf("%d", ans);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b); // ekhane ashbe
    return 0;
}