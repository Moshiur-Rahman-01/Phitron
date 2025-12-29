#include <stdio.h>
void loop(int i)
{
    
    if (i == 0)
    {
        return;
    }
    printf("%d\n", i);
    loop(i - 1);
}
int main()
{
    int n;
    scanf("%d",&n);
    loop(n);
    return 0;
}