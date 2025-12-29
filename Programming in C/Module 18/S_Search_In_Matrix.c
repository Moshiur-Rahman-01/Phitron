#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int n;
    scanf("%d",&n);
        int flag = 1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (a[i][j]==n)
                {
                    flag=0;
                }
            }
        }
        if (flag)
        {
            printf("will take number");
        }
        else
        {
            printf("will not take number");
        }
    return 0;
}