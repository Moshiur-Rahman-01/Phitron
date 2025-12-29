#include <stdio.h>
void sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = ", a, b);
    int ans = a + b;
    // return; -> return to line 13
    printf("%d", ans);
}
int main()
{
    sum(); // ekhane ashbe
    return 0;
}