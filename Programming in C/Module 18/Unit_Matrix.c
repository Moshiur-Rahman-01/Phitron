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
    if (r != c)
        printf("This is not a Unit Matrix");
    else
    {
        int flag1 = 1;
        int flag2 = 1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    if (a[i][j]!=1)
                    {
                        flag1 = 0;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        flag2 = 0;
                    }
                }
            }
        }
        if (flag1 == 1 && flag2 == 1)
        {
            printf("This is a Unit Matrix");
        }
        else
        {
            printf("This is not a Unit Matrix");
        }
    }
    return 0;
}