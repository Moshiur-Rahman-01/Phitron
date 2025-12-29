// 10
// 1 2 0 2 0 3 1 2 5 0
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int fre[6]={0};
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            fre[0]++;
        }
        else if (a[i] == 1)
        {
            fre[1]++;
        }
        else if (a[i] == 2)
        {
            fre[2]++;
        }
        else if (a[i] == 3)
        {
            fre[3]++;
        }
        else if (a[i] == 4)
        {
            fre[4]++;
        }
        else if (a[i] == 5)
        {
            fre[5]++;
        }
    }
    printf("0 -> %d\n", fre[0]);
    printf("1 -> %d\n", fre[1]);
    printf("2 -> %d\n", fre[2]);
    printf("3 -> %d\n", fre[3]);
    printf("4 -> %d\n", fre[4]);
    printf("5 -> %d\n", fre[5]);
    return 0;
}