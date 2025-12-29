#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int x,y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(a[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    int row= abs(2-x);
    int col= abs(2-y);
    printf("%d",row+col);

    return 0;
}