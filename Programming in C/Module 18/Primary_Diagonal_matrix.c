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
    if(r!=c)
        printf("This is not a Primary Diagonal Matrix");
    else{
        int flag = 1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i!=j){
                    if (a[i][j] != 0){
                        flag = 0;
                    }
                }
            }
        }
        if(flag){
            printf("This is a Primary Diagonal Matrix");
        }
        else{
            printf("This is not a Primary Diagonal Matrix");
        }
    }
    return 0;
}