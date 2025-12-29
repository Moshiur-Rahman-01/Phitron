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
        printf("NO");
    else
    {
        int flag1 = 1;
        int flag2 = 1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i != j && i + j != r - 1)
                {
                    if (a[i][j] != 0)
                    {
                        flag1 = 0;
                    }
                }
                if (i == j || i + j == r - 1)
                {
                    if (a[i][j] != 1)
                    {
                        flag2 = 0;
                    }
                }
            }
        }
        if (flag1==1 && flag2==1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}