#include <stdio.h>
void loop(int i)
{
    // int n;
    // scanf("%d",&n);
    if (i == 6)
    {
        return;
    }
    loop(i + 1);
    printf("%d\n", i);
}
int main()
{
    int i = 1;
    loop(i);
    return 0;
}