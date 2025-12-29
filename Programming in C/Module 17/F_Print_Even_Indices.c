#include <stdio.h>
void loop(int a[], int size, int i)
{
    if (i < 0)
    {
        return;
    }    
    if(i%2==0)
    {
        printf("%d", a[i]);
        if (i > 0)
            printf(" ");
    }
    loop(a, size, i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int i=n-1;
    loop(a, n, i);
    return 0;
}